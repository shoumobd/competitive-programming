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
    LL n,i,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if((i*(i+1))/2==n)
        {
            x=i; break;
        }
        if((i*(i+1))/2>n)
        {
            x=n-((i*(i-1))/2); break;
        }
    }
    cout<<x;
    return 0;
}
