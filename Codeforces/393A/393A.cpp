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
    string s; map <char, int> mp; int i;
    cin>>s; for(i=0;i<s.size();i++){mp[s[i]]++;}
    cout<<min(min(min((mp['n']-1)/2,mp['e']/3),mp['i']),mp['t']);
    return 0;
}
