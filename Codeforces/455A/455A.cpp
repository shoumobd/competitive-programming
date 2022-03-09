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
    LL n,i,a,mx=-1;
    vector <LL> v;
    map <LL, LL> mp;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        mx=max(mx,a);
        mp[a]++;
    }
    v.push_back(0);
    v.push_back(1*mp[1]);
    for(i=2; i<=mx; i++)
    {
        a=max(v[i-1],i*mp[i]+v[i-2]);
        v.push_back(a);
    }
    cout<<v[mx];
    return 0;
}
