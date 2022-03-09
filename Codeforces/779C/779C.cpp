#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool ss(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first-a.second<b.first-b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL n,k,i,a,c=0;
    vector < pair <LL, LL> > v;
    cin>>n>>k;
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
    sort(v.begin(),v.end(),ss);
    for(i=0;i<k;i++)
    {
        c+=v[i].first;
    }
    for(i=k;i<n;i++)
    {
        if(v[i].first<v[i].second) c+=v[i].first;
        else c+=v[i].second;
    }
    cout<<c;
    return 0;
}
