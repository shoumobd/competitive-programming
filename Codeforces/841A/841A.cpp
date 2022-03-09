#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i;
    bool f=1;
    string s;
    map <char, int> mp;
    map <char, int> :: iterator it;
    cin>>n>>k>>s;
    for(i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>k)
        {
            f=0;
            break;
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
