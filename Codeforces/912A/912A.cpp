#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll a,b,x,y,z;
    cin>>a>>b>>x>>y>>z;
    cout<<max((long long)0,2*x+y-a)+max((long long)0,3*z+y-b);
    return 0;
}
