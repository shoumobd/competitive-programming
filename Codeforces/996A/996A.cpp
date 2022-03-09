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
    LL n,c=0,i,x,a[]={ 1, 5, 10, 20, 100 };
    cin>>n;
    for(i=4;i>=0;i--)
    {
        x=n/a[i];
        c+=x; n-=(x*a[i]);
    }
    cout<<c;
    return 0;
}
