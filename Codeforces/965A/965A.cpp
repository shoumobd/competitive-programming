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
    int k,n,s,p,c,x;
    cin>>k>>n>>s>>p;
    c=1+(n-1)/s;
    x=1+(k*c-1)/p;
    cout<<x;
    return 0;
}
