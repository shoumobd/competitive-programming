#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,a;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(n==1)
    {
        if(v[n-1]==15) cout<<"DOWN\n";
        else if(v[n-1]==0) cout<<"UP\n";
        else cout<<"-1\n";
    }
    else
    {
        if(v[n-1]==15) cout<<"DOWN\n";
        else if(v[n-1]==0) cout<<"UP\n";
        else
        {
            if(v[n-2]<v[n-1]) cout<<"UP\n";
            else cout<<"DOWN\n";
        }
    }
    return 0;
}
