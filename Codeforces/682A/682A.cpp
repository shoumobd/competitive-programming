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
    LL n,m,s=0,x;
    cin>>n>>m;
    for(x=1;x<=m;x++)
    {
        s+=((n+x)/5);
        s-=(x/5);
        //cout<<x<<" "<<s<<"\n";
    }
    cout<<s;
    return 0;
}
