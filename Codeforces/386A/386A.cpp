#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortr(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first>b.first);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,a;
    vector <pair <int, int> > v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end(),sortr);
    cout<<v[0].second<<" "<<v[1].first;
    return 0;
}
