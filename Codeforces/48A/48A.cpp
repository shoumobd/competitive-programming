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
    map <string, char> mp;
    map <string, int> c;
    string s;
    cin>>s; mp[s]='F'; c[s]++;
    cin>>s; mp[s]='M'; c[s]++;
    cin>>s; mp[s]='S'; c[s]++;
    if(c["rock"]==1 && c["scissors"]==2) cout<<mp["rock"];
    else if(c["paper"]==1 && c["rock"]==2) cout<<mp["paper"];
    else if(c["scissors"]==1 && c["paper"]==2) cout<<mp["scissors"];
    else cout<<"?";
    return 0;
}
