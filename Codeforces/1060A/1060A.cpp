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
    string s;
    int i,n;
    map <int, int> mp;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        mp[s[i]-'0']++;
    }
    //cout<<mp[8]<<" "<<n/11<<"\n";
    cout<<min(mp[8],n/11);
    return 0;
}
