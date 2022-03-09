#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)
#define inf INT_MAX

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,mx=-1,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        mx=max(mx,x+y);
    }
    cout<<mx;
    return 0;
}
