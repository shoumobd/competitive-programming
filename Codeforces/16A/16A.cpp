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
    int n,m,i;
    string s,f="YES";
    vector <string> v;
    map <char, int> mp;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
        mp[s[0]]++;
        sort(s.begin(),s.end());
        if(i && s[0]==v[i-1][0]) f="NO";
        if(s[0]!=s[s.size()-1]) f="NO";
    }
    //if(mp.size()<n) f="NO";
    cout<<f;
    return 0;
}
