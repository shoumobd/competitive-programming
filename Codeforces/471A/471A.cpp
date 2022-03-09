#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=6,l,f=0;
    vector <int> v;
    map <int, int> mp;
    map <int, int> :: iterator it;
    while(n--)
    {
        cin>>l;
        mp[l]++;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second!=4 && it->second>0)
        {
            v.push_back(it->first);
        }
        if(it->second==3)
        {
            cout<<"Alien\n";
            return 0;
        }
        if(it->second==5)
        {
            cout<<"Bear\n";
            return 0;
        }
        if(it->second==6)
        {
            cout<<"Elephant\n";
            return 0;
        }
    }
    if(v.size()==2) cout<<"Bear\n";
    else if(v.size()==1) cout<<"Elephant\n";
    else cout<<"Alien\n";
    return 0;
}
