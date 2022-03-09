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
    LL x,y;
    bool f=1;
    cin>>x>>y;
    if(x==y) f=0;
    else if(x<y)
    {
        if(y-x>1) f=0;
    }
    else
    {
        if(y<=1) f=0;
        else if(!((x-y)%2))  f=0;
    }
    if(f) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
