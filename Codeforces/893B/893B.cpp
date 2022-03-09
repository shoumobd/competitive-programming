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
    LL n,k=0,c,x;
    cin>>n;
    while(++k)
    {
        x=(pow(2,k)-1)*(pow(2,k-1));
        //cout<<x<<"\n";
        if(x>n) break;
        if(!(n%x)) c=x;
    }
    cout<<c;
    return 0;
}
