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
    LL l,r,i;
    cin>>l>>r;
    cout<<"YES\n";
    for(i=l;i<r;i+=2)
    {
        //cout<<__gcd(i,i+1)<<" ";
        cout<<i<<" "<<i+1<<"\n";
    }
    return 0;
}
