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
    LL n,x,d,s=0;
    char c;
    cin>>n>>x;
    while(n--)
    {
        cin>>c>>d;
        if(c=='+')
        {
            x+=d;
        }
        else
        {
            if(x-d>=0)
                x-=d;
            else
                s++;
        }
    }
    cout<<x<<" "<<s<<"\n";
    return 0;
}
