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
    double a,b,c=0.0; int n,k,i; vector < pair<double,double> > v;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a>>b; v.push_back(make_pair(a,b));
    }
    for(i=1;i<n;i++)
    {
        a=(v[i].first-v[i-1].first)*(v[i].first-v[i-1].first)+(v[i].second-v[i-1].second)*(v[i].second-v[i-1].second);
        c+=(sqrt(a));
    }
    cout<<fixed<<setprecision(9)<<(c*k)/50.0;
    return 0;
}
