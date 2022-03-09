#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

LL f(LL n){ return (n*(n-1))/2; }

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL n,m,mx,mn1,mn2,mn;
    cin>>n>>m;
    mx=f(n-m+1);
    mn1=(m-(n%m))*f(n/m);
    if(n%m) mn2=(n%m)*f((n-((m-(n%m))*(n/m)))/(n%m));
    else mn2=0;
    mn=mn1+mn2;
    cout<<mn<<" "<<mx<<"\n";
    return 0;
}
