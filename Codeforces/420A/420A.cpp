#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

bool ip(string s)
{
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1]) return 0;
    }
    return 1;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,f="YES"; int i;
    map <char, bool> mp;
    mp['B']=1;
    mp['C']=1;
    mp['D']=1;
    mp['E']=1;
    mp['F']=1;
    mp['G']=1;
    mp['J']=1;
    mp['K']=1;
    mp['L']=1;
    mp['N']=1;
    mp['P']=1;
    mp['Q']=1;
    mp['R']=1;
    mp['S']=1;
    mp['Z']=1;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(mp[s[i]]) f="NO";
    }
    if(!ip(s)) f="NO";
    cout<<f;
    return 0;
}
