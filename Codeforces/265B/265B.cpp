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
    LL n,i,h;
    vector <LL> v;
    cin>>n;
    for(i=0;i<n;i++) { cin>>h; v.push_back(h); }
    LL c=v[0]+2*n-1;
    for(i=0;i<n-1;i++)
    {
        c+=(max((LL)0,v[i]-v[i+1]));
        c+=(max((LL)0,v[i+1]-v[i]));
    }
    cout<<c;
    return 0;
}
