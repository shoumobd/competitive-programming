#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    b%=n;
    if(b<=0) b+=n;
    a=(a+b)%n;
    if(a<=0) a+=n;
    cout<<a;
    return 0;
}
