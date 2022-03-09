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
    LL n,m,i,a,c=0; vector <LL> v;
    map <LL, bool> mp;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a; mp[a]=1;
    }
    i=0;
    while(++i)
    {
        if(mp[i]) continue;
        if(c+i<=m)
        {
            c+=i;
            v.push_back(i);
        }
        else break;
    }
    cout<<v.size()<<"\n";
    for(i=0;i<v.size();i++)
    {
        if(i) cout<<" ";
        cout<<v[i];
    }
    return 0;
}
