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
    //for(int i=1;i<=100;i++) cout<<(i*(i+1))/2<<"\n";
    LL n; cin>>n; cout<<(n/2+n%2)%2;
    return 0;
}
