#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,j,c=0;
    string s;
    map <char, int> mp;
    vector <string> v;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<m-1; j++)
        {
            mp.clear();
            mp[v[i][j]]++;
            mp[v[i][j+1]]++;
            mp[v[i+1][j]]++;
            mp[v[i+1][j+1]]++;
            if(mp['f'] && mp['a'] && mp['c'] && mp['e'])
                c++;
        }
    }
    cout<<c;
    return 0;
}
