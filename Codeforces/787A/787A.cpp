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
    LL a,b,c,d,i,n=10000000;
    bool f=0;
    cin>>a>>b>>c>>d;
    for(i=0;i<n;i++)
    {
        if((!((b+i*a-d)%c)) && b+i*a-d>=0)
        {
            f=1;
            cout<<b+i*a<<"\n";
            break;
        }
    }
    if(!f) cout<<"-1\n";
    return 0;
}
