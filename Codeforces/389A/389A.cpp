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
    int n,n1,x,a;
    cin>>n>>x;
    n1=n;
    while(--n)
    {
        cin>>a;
        x=__gcd(x,a);
    }
    x*=n1;
    cout<<x;
    return 0;
}
