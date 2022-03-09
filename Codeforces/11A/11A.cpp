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
    LL n,c=0,x,y,d,a;
    cin>>n>>d>>y;
    while(--n)
    {
        cin>>x;
        if(x<=y)
        {
            a=1+(y-x)/d;
            y=x+a*d;
            c+=a;

        }
        else
        {
            y=x;
        }
    }
    cout<<c;
    return 0;
}
