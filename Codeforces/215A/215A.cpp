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
    int n,m,i,j,mx=0,x; map <int, int> mp; vector <int> a,b;
    cin>>n; for(i=0;i<n;i++) { cin>>x; a.push_back(x); }
    cin>>m; for(i=0;i<m;i++) { cin>>x; b.push_back(x); }
    for(i=0;i<n;i++) for(j=0;j<m;j++) if(!(b[j]%a[i])){ x=b[j]/a[i]; mp[x]++; mx=max(mx,x); }
    cout<<mp[mx];
    return 0;
}
