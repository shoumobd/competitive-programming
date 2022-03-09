#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    s1=s;
    int i=s.find("AB");
    if(i!=string::npos)
    {
        s[i]='C';
        s[i+1]='C';
        i=s.find("BA");
    }
    int j=s1.find("BA");
    if(j!=string::npos)
    {
        s1[j]='C';
        s1[j+1]='C';
        j=s1.find("AB");
    }
    if(i!=string::npos || j!=string::npos) cout<<"YES";
    else cout<<"NO";
    return 0;
}
