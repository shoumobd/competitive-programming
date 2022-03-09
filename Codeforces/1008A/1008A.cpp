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
    string s,f="YES";
    int i;
    map <char, int> mp;
    mp['a']=1;
    mp['e']=1;
    mp['i']=1;
    mp['o']=1;
    mp['u']=1;
    mp['n']=1;
    cin>>s;
    for(i=0;i+1<s.size();i++)
    {
        if(!mp[s[i]] && (!mp[s[i+1]] || s[i+1]=='n')) f="NO";
    }
    if(!mp[s[s.size()-1]]) f="NO";
    cout<<f;
    return 0;
}
