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

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i; map<char, int> mp;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    if(mp['I']==0) cout<<mp['A'];
    else if(mp['I']==1) cout<<1;
    else cout<<0;
    return 0;
}
