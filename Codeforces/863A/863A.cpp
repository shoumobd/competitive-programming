#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool pal(string s)
{
    for(int i=0;i<s.size()/2;i++) if(s[i]!=s[s.size()-i-1]) return 0;
    return 1;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    while(s[s.size()-1]=='0') s.erase(s.end()-1);
    //cout<<s;
    if(pal(s)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
