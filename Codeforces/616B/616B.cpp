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
    int n,m,i,j,mn,mx=0,a;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        mn=INT_MAX;
        for(j=0; j<m; j++)
        {
            cin>>a;
            mn=min(a,mn);
        }
        mx=max(mx,mn);
    }
    cout<<mx;
    return 0;
}
