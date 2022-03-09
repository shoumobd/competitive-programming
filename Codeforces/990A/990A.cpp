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
    LL n,m,a,b,x,y;
    cin>>n>>m>>a>>b;
    x=a*(m-(n%m)); y=b*(n%m);
    //cout<<x<<" "<<y<<"\n";
    cout<<min(x,y);
    return 0;
}
