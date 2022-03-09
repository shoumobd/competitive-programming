#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL n,m,i,x,y,c1=0,c2=0;
    cin>>n>>m;
    LL r[n+1],c[n+1],s=n*n;
    memset(r,0,sizeof(r));
    memset(c,0,sizeof(c));
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        if(!r[x])
        {
            r[x]++;
            c1++;
            s-=(n-c2);
        }
        if(!c[y])
        {
            c[y]++;
            c2++;
            s-=(n-c1);
        }
        if(i) cout<<" ";
        cout<<s;
    }
    return 0;
}
