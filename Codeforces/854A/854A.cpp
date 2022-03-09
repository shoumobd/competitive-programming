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
    int n,i; cin>>n;
    for(i=n/2;i>0;i--)
    {
        if(__gcd(i,n-i)==1)
        {
            cout<<i<<" "<<n-i;
            break;
        }
    }
    return 0;
}
