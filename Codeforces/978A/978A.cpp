#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,i;
    vector <int> v,v2;
    map <int, int> mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=n-1;i>=0;i--)
    {
        if(mp[v[i]]!=-1)
        {
            v2.push_back(v[i]);
            mp[v[i]]=-1;
        }
    }
    reverse(v2.begin(),v2.end());
    cout<<v2.size()<<"\n";
    for(i=0;i+1<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<v2[v2.size()-1]<<"\n";
    return 0;
}
