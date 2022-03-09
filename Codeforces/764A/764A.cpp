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
    int n,m,z,x;
    cin>>n>>m>>z;
    x=__gcd(n,m);
    x=(n*m)/x;
    cout<<z/x<<"\n";
    return 0;
}
