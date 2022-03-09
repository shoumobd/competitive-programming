#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,x1=0,x2=0;
    string s;
    map <int, int> mp;
    cin>>n>>s;
    for(i=0;i<s.size();i++)
    {
        mp[s[i]-'0']++;
        if(i<n/2) x1+=(s[i]-'0'); else x2+=(s[i]-'0');
    }
    if(mp[4]+mp[7]==n && x1==x2) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
