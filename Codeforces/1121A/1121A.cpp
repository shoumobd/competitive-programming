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
    int n,m,k,i,a,c=0;
    vector <pair <int, int> > v;
    map <int, int> mp;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,0));
    }
    for(i=0;i<n;i++)
    {
        cin>>a;
        v[i].second=a;
    }
    for(i=0;i<n;i++)
    {
        a=v[i].second;
        mp[a]=max(mp[a],v[i].first);
    }
    for(i=0;i<k;i++)
    {
        cin>>a;
        if(mp[v[a-1].second]!=v[a-1].first){ c++; /*cout<<i<<"\n";*/ }
    }
    cout<<c;
    return 0;
}
