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
    int n;
    string s;
    map <string, int> mp;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(mp[s]) cout<<"YES\n"; else cout<<"NO\n";
        mp[s]=1;
    }
    return 0;
}
