#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

LL ncr(LL n, LL r)
{
    LL i,y=1;
    for(i=0;i<r;i++)
    {
        y*=(n-i);
        //cout<<"y="<<y<<"\n";
    }
    LL x=1;
    for(i=2;i<=r;i++)
    {
        x*=i;
        //cout<<"x="<<x<<"\n";
    }
    return y/x;
}

LL ff(LL r)
{
    LL x=r,i;
    for(i=r-1;i>=1;i--)
    {
        x*=i;
        //cout<<"x="<<x<<"\n";
    }
    if(r>=3) x+=r;
    return x;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    LL n,k,i,x,y,c=0;
    cin>>n>>k;
    for(i=k;i>=1;i--)
    {
        x=ncr(n,i);
        //cout<<i<<" "<<x<<"\n";
        y=x*ff(i-1);
        c+=y;
        //cout<<i<<" "<<y<<"\n";
    }
    cout<<++c;
    return 0;
}
