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
    LL n,m,i,a=1,c=0;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        a*=2;
        if(a>m)
        {
            c=m;
            break;
        }
    }
    if(!c)
        c=m%a;
    cout<<c;
    return 0;
}
