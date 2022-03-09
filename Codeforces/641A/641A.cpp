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
    int n,i,d;
    string s,f;
    vector <int> v;
    map <int, bool> mp;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>d; v.push_back(d);
    }
    i=0;
    while(1)
    {
        if(s[i]=='>') i+=(v[i]);
        else i-=(v[i]);
        if(i>=n || i<0) { f="FINITE"; break; }
        if(mp[i]) { f="INFINITE"; break; }
        mp[i]=1;
    }
    cout<<f;
    return 0;
}
