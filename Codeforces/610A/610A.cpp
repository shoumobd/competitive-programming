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
    int n;
    cin>>n;
    if(n%2) cout<<0;
    else
    {
        n/=2;
        if(n%2) cout<<n/2;
        else cout<<n/2-1;
    }
    return 0;
}
