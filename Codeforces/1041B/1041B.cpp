#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)
#define inf INT_MAX

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL a,b,x,y,x1,y1;
    cin>>a>>b>>x>>y;
    x1=x/__gcd(x,y);
    y1=y/__gcd(x,y);
    cout<<min(a/x1,b/y1);
    return 0;
}
