#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j;
    long long c=0,x=1;
    string s;
    map <char, int> mp;
    vector <string> v;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=0;i<m;i++)
    {
        c=0;
        mp.clear();
        for(j=0;j<n;j++)
        {
            if(mp[v[j][i]]==0)
            {
                c++;
            }
            mp[v[j][i]]++;
        }
        c%=1000000007;
        x*=c;
        x%=1000000007;
    }
    cout<<x;
    return 0;
}
