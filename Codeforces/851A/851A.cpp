#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL n,k,t;
    cin>>n>>k>>t;
    if(t<=n) t=min(t,k);
    else t=n+k-t;
    cout<<t;
    return 0;
}
