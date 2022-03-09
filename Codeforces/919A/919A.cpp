#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double m,a,b,x=10000000;
    cin>>n>>m;
    while(n--)
    {
        scanf("%lf %lf",&a,&b);
        x=min(x,m*a/b);
    }
    cout<<fixed<<setprecision(8)<<x;
    return 0;
}
