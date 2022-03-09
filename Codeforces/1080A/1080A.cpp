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
    LL n,k;
    cin>>n>>k;
    LL c1=1+(n*2-1)/k;
    LL c2=1+(n*5-1)/k;
    LL c3=1+(n*8-1)/k;
    cout<<c1+c2+c3;
    return 0;
}
