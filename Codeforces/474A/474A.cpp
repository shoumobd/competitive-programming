#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    int c,i,j;
    string s1,s="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>ch>>s1;
    if(ch=='R') c=-1;
    else c=1;
    for(i=0;i<s1.size();i++)
    {
        for(j=0;j<s.size();j++)
        {
            if(s[j]==s1[i])
            {
                s1[i]=s[j+c];
                break;
            }
        }
    }
    cout<<s1;
    return 0;
}
