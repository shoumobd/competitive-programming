#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,x=1;
    cin>>n;
    for(i=2; i<=n; i++)
        x*=i;
    cout<<x<<"\n";
    return 0;
}
