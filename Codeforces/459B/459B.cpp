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
    LL n,i,a;
    vector <LL> v;
    map <LL, LL> mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        mp[a]++;
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]-v[0]<<" ";
    if(v[0]==v[n-1]) cout<<((mp[v[0]])*(mp[v[n-1]]-1))/(LL)2;
    else cout<<(mp[v[0]])*(mp[v[n-1]]);
    return 0;
}
