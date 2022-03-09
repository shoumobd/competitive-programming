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
    int n,m,b,i;
    cin>>n>>m;
    vector <int> v(n+1);
    fill(v.begin(),v.end(),0);
    while(m--)
    {
        cin>>b;
        for(i=b;i<=n;i++) if(!v[i]) v[i]=b;
    }
    for(i=1;i<=n;i++){ if(i>1) cout<<" "; cout<<v[i]; }
    return 0;
}
