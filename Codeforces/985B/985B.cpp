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
    int n,m,i,j,f;
    map <int, int> mp; string s,fs="NO";
    vector <string> v;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
        for(j=0;j<m;j++) if(s[j]=='1') mp[j]++;
    }
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=0;j<m;j++)
        {
            if(v[i][j]=='1' && mp[j]<=1) f=0;
        }
        if(f) {fs="YES"; break;}
    }
    cout<<fs;
    return 0;
}
