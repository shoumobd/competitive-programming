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
    int k,a,mx=-1;
    cin>>k;
    while(k--)
    {
        cin>>a;
        mx=max(mx,a);
    }
    cout<<max(0,mx-25);
    return 0;
}
