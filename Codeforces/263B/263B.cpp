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
    LL n,k,i,a; vector <LL> v; v.push_back(0);
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a; v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(k>n) cout<<"-1";
    else cout<<v[n-k]+1<<" "<<v[n-k]+1;
    return 0;
}
