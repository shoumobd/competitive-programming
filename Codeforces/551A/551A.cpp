#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <int, int> mp;
    map <int, int> ::iterator it;
    int n,c=0,x,i;
    vector <int> a(2001);
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        mp[x]++;
    }
    //sort(mp.begin(),mp.end());
    for(it=mp.begin();it!=mp.end();it++)
    {
        c+=it->second;
        a[it->first]=n-c+1;
    }
    for(i=0;i<n-1;i++)
    {
        cout<<a[v[i]]<<" ";
    }
    cout<<a[v[n-1]]<<"\n";
    return 0;
}
