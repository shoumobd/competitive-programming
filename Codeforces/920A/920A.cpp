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
    int t,n,k,i,mx,x,xp;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<k; i++)
        {
            cin>>x;
            if(!i)
            {
                mx=x-1;
            }
            else
            {
                mx=max(mx,(x-xp-1)/2+(x-xp-1)%2);
            }
            xp=x;
        }
        mx=max(mx,n-xp);
        cout<<++mx<<"\n";
    }
    return 0;
}
