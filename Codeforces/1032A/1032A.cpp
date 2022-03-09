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
    int n,k,a,c=0,mx=-1; map <int, int> mp; map <int, int> :: iterator it;
    cin>>n>>k;
    while(n--){ cin>>a; mp[a]++; }
    for(it=mp.begin();it!=mp.end();it++)
    {
        mx=max(mx,it->second);
    }
    if(mx%k) mx+=(k-(mx%k));
    //cout<<mx;
    for(it=mp.begin();it!=mp.end();it++)
    {
        c+=(mx-it->second);
    }
    cout<<c;
    return 0;
}
