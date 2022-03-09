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
    int n,c5=0,c0=0,i,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(!a) c0++; else c5++;
    }
    if(!c0) cout<<"-1";
    else
    {
        c5-=c5%9;
        if(!c5) cout<<"0";
        else
        {
            while(c5--) cout<<"5";
            while(c0--) cout<<"0";
        }
    }
    return 0;
}
