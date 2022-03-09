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
    LL n,x,a;
    cin>>n>>x; LL c=n-1;
    while(n--)
    {
        cin>>a; c+=a;
    }
    if(c==x) cout<<"YES"; else cout<<"NO";
    return 0;
}
