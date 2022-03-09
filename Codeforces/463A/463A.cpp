#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,mx=-1,x,y;
    cin>>n>>s;
    while(n--)
    {
        cin>>x>>y;
        if(x<s && y && 100-y>mx) mx=100-y;
        else if(x<=s && !y && y>mx) mx=y;
    }
    cout<<mx;
    return 0;
}
