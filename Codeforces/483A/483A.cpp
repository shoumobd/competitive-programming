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
    LL l,r;
    cin>>l>>r;
    LL x=r-l+1;
    if(x<3)
        cout<<"-1\n";
    else
    {
        if(x==3)
        {
            if(l%2)
                cout<<"-1\n";
            else
                cout<<l<<" "<<l+1<<" "<<l+2<<"\n";
        }
        else
        {
            if(l%2)
                cout<<l+1<<" "<<l+2<<" "<<l+3<<"\n";
            else
                cout<<l<<" "<<l+1<<" "<<l+2<<"\n";
        }
    }
    return 0;
}
