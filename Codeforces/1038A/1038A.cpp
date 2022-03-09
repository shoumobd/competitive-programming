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
    int n,k,i,mn=INF; string s; map <int, int> mp;
    cin>>n>>k>>s;
    for(i=0;i<n;i++) mp[s[i]-'A'+1]++;
    for(i=1;i<=k;i++) mn=min(mn,mp[i]); cout<<mn*k;
    return 0;
}
