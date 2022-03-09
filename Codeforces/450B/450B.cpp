#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL x,y,n,s;
    cin>>x>>y>>n; n%=6; if(!n) n+=6;
    LL a[11],i;
    a[1]=x; a[2]=y;
    for(i=3;i<=6;i++)
    {
        a[i]=a[i-1]-a[i-2];
        //cout<<i<<"\t"<<a[i]<<"\n";
    }
    s=a[n]%MOD;
    if(s<0) s+=MOD;
    cout<<s<<"\n";
    return 0;
}
