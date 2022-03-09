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
    int a,b,c,p,q,r,x;
    cin>>a>>b>>c;
    p=(a*b)/c; p=sqrt(p);
    q=(b*c)/a; q=sqrt(q);
    r=(c*a)/b; r=sqrt(r);
    x=p+q+r; x*=4;
    cout<<x;
    return 0;
}
