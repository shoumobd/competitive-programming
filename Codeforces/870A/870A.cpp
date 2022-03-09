#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x,a=10,b=10;
    map <int, int> mp;
    map <int, int> ::iterator it;
    cin>>n>>m;
    while(n--)
    {
        cin>>x;
        a=min(a,x);
        mp[x]++;
    }
    while(m--)
    {
        cin>>x;
        b=min(b,x);
        mp[x]++;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>1)
        {
            cout<<it->first;
            return 0;
        }
    }
    cout<<min(a,b)*10+max(a,b);
    return 0;
}
