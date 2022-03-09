#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    string s,s1;
    cin>>s>>n;
    map <string, int> mp;
    map <string, int> :: iterator it;
    for(i=0;i<n;i++)
    {
        cin>>s1;
        mp[s1]=1;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        s1=it->first;
        if(!s1.find(s))
        {
            s=s1;
            break;
        }
    }
    cout<<s<<'\n';
    return 0;
}
