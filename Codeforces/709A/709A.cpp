#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,b,d,a,c=0,x=0;
    cin>>n>>b>>d;
    while(n--)
    {
        cin>>a;
        if(a>b) continue;
        c+=a;
        if(c>d){ x++; c=0; }
    }
    cout<<x;
    return 0;
}
