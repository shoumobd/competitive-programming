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
    LL k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    cout<<256*(min(k2,min(k5,k6)))+32*min(k3,k2-min(k2,min(k5,k6)));
    return 0;
}
