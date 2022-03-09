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
    getline(cin,s);
    map <char, bool> mp;
    mp['a']=1;
    mp['e']=1;
    mp['i']=1;
    mp['o']=1;
    mp['u']=1;
    mp['y']=1;
    int i=s.size()-1;
    while(!((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))) i--;
    char c=tolower(s[i]);
    //cout<<c<<"\n";
    if(mp[c]) cout<<"YES"; else cout<<"NO";
    return 0;
}
