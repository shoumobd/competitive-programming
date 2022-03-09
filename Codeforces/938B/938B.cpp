#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x=0,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        x=max(x,min(a-1,1000000-a));
    }
    cout<<x;
    return 0;
}
