#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,i,j,mxj,mx,a;
    cin>>n>>m;
    vector <ll> v(n+2);
    fill(v.begin(),v.end(),0);
    for(i=0;i<m;i++)
    {
        mx=-1;
        for(j=0;j<n;j++)
        {
            cin>>a;
            if(a>mx)
            {
                mx=a;
                mxj=j;
            }
        }
        v[mxj]++;
    }
    mx=-1;
    for(i=0;i<n;i++)
    {
        if(v[i]>mx)
        {
            mx=v[i];
            mxj=i;
        }
    }
    cout<<mxj+1<<"\n";
    return 0;
}
