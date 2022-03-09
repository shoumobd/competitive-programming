#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

LL f(LL x)
{
    if(x%2) return -1*((x+1)/2); return x/2;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL q,l,r; cin>>q;
    while(q--) { cin>>l>>r; cout<<f(r)-f(l-1)<<"\n"; }
    return 0;
}
