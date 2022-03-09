#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,i,y,m;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        if(x-1>=1)
        {
            v[x-2]+=(y-1);
        }
        if(x+1<=n)
        {
            v[x]+=(v[x-1]-y);
        }
        v[x-1]=0;
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<"\n";
    }
    return 0;
}
