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
    LL x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    LL c1=t1*(abs(x-y));
    LL c2=t2*(abs(x-y))+t2*(abs(x-z))+3*t3;
    //cout<<c1<<" "<<c2<<"\n";
    if(c2<=c1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
