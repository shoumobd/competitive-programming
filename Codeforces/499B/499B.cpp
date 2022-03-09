#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i;
    string s1,s2;
    map <string,string> mp;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>s1>>s2;
        mp[s1]=s2;
    }
    for(i=0;i<n;i++)
    {
        cin>>s1;
        if(s1.size()<=mp[s1].size()) cout<<s1<<" ";
        else cout<<mp[s1]<<" ";
    }
    return 0;
}
