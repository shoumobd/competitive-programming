#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,a,f=1;
    map <int, int> mp;
    vector <int> v;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<m; i++)
    {
        cin>>a;
        mp[a]=1;
    }
    for(i=0; i<n; i++)
    {
        if(mp[v[i]]==1)
        {
            if(!f)
                cout<<" ";
            cout<<v[i];
            f=0;
        }
    }
    return 0;
}
