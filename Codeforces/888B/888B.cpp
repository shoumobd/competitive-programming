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
    int n,i; string s; cin>>n>>s;
    map <char, int> mp;
    for(i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    cout<<2*(min(mp['U'],mp['D'])+min(mp['L'],mp['R']));
    return 0;
}
