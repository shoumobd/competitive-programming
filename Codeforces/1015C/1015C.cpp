#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<LL,LL> &a, const pair<LL,LL> &b)
{
    return (a.second<b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL n,m,i,a,b,c=0,f=0;
    vector <LL> v;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        c+=a;
        v.push_back(a-b);
    }
    sort(v.begin(),v.end());
    while(c>m && n>0)
    {
        c-=(v[--n]);
        f++;
    }
    if(c<=m) cout<<f; else cout<<"-1";
    return 0;
}
