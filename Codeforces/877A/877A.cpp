#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i,c=0;
    cin>>s;
    while(s.find("Danil")!=string::npos)
    {
        c++;
        s[s.find("Danil")]='0';
    }
    while(s.find("Olya")!=string::npos)
    {
        c++;
        s[s.find("Olya")]='0';
    }
    while(s.find("Slava")!=string::npos)
    {
        c++;
        s[s.find("Slava")]='0';
    }
    while(s.find("Ann")!=string::npos)
    {
        c++;
        s[s.find("Ann")]='0';
    }
    while(s.find("Nikita")!=string::npos)
    {
        c++;
        s[s.find("Nikita")]='0';
    }
    if(c==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
