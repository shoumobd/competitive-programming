#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j=0;
    string s,t;
    cin>>s>>t;
    for(i=0;i<t.size();i++)
    {
        if(j+1==s.size()) break;
        if(s[j]==t[i]) j++;
    }
    cout<<j+1;
    return 0;
}
