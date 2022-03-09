#include <bits/stdc++.h>

using namespace std;

int lcm(int a, int b)
{
    return (a*b)/__gcd(a,b);
}

int main()
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    cout<<b/lcm(x,y)-(a-1)/lcm(x,y);
    return 0;
}
