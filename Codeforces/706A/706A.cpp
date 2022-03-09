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
    int n;
    double a,b,x,y,v,s,t,c=DBL_MAX;
    cin>>a>>b>>n;
    while(n--)
    {
        cin>>x>>y>>v;
        s=(x-a)*(x-a)+(y-b)*(y-b);
        s=sqrt(s);
        t=s/v;
        c=min(t,c);
    }
    cout<<fixed<<setprecision(20)<<c<<"\n";
    return 0;
}
