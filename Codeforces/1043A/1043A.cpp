#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,a,c=0,mxa=0,s=0,k;
    vector <int> v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
        c+=a;
        mxa=max(a,mxa);
    }
    for(i=0; i<n; i++)
    {
        s+=(mxa-v[i]);
    }
    //cout<<c<<" "<<s<<"\n";
    if(c<s)
        k=mxa;
    else
    {
        s=c-s;
        //cout<<s<<"\n";
        k=mxa+1+s/n;
    }
    cout<<k;
    return 0;
}
