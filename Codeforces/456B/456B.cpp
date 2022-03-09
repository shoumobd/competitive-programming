#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>s;
    if(s[s.size()-1]%2) cout<<0;
    else
    {
        n=s[s.size()-1]-'0';
        if(s.size()>1) n+=(10*(s[s.size()-2]-'0'));
        if(n%4) cout<<0;
        else cout<<4;
    }
    return 0;
}
