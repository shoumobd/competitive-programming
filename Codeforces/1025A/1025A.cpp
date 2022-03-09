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
    int n,i;
    string s,f="No";
    map <char, int> mp;
    map <char, int> :: iterator it;
    cin>>n>>s;
    for(i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    if(n==1) f="Yes";
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>1) f="Yes";
    }
    cout<<f;
    return 0;
}
