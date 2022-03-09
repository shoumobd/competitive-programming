#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    string s,f="NO";
    cin>>n;
    while(n--)
    {
        cin>>s>>b>>a;
        if(b>=2400 && a>b) f="YES";
    }
    cout<<f;
    return 0;
}
