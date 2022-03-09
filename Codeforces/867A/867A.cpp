#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i; string s;
    map <char, int> mp; cin>>n>>s;
    for(i=1;i<n;i++) if(s[i-1]!=s[i]) mp[s[i]]++;
    if(mp['F']>mp['S']) cout<<"YES\n"; else cout<<"NO\n";
    return 0;
}
