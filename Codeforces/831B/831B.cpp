#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    int i;
    map <char,char> mp;
    cin>>s1>>s2;
    for(i=0;i<s1.size();i++)
    {
        mp[s1[i]]=s2[i];
    }
    cin>>s1;
    s2=s1;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]>='A' && s1[i]<='Z') s2[i]=toupper(mp[tolower(s1[i])]);
        else if(s1[i]>='a' && s1[i]<='z') s2[i]=mp[tolower(s1[i])];
        else s2[i]=s1[i];
    }
    cout<<s2;
    return 0;
}
