#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,i,c=0,x,a,f=-1,s=0;
    vector <int> v;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a+c);
        x=min(8,v[i]);
        s+=x;
        //cout<<"x "<<x<<" vi "<<v[i]<<" i "<<i<<" s "<<s<<"\n";
        if(s>=k && f<0)
        {
            f=i+1;
            //cout<<"here, "<<s<<"\n";
        }
        v[i]-=x;
        c=v[i];
    }
    cout<<f;
    return 0;
}
