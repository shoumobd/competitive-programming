#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <int, int> mp;
    map <int, int> :: iterator it;
    int n=5,c=0,a,mn=INT_MAX,x;
    while(n--)
    {
        cin>>a;
        c+=a;
        mp[a]++;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>=3) x=it->first*3;
        else if(it->second>=2) x=it->first*2;
        else x=0;
        mn=min(mn,c-x);
    }
    cout<<mn;
    return 0;
}
