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
    int n,x,y,u=0,d=0,e1=0,e2=0,i,f=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        u+=x;
        d+=y;
        //if(!(x%2)) e1++;
        //if(!(y%2)) e2++;
        if(x%2!=y%2) f=1;
    }
    if(u%2!=d%2) cout<<"-1";
    else
    {
        if(!(u%2) && !(d%2)) cout<<"0";
        else
        {
            //if(e1 || e2) cout<<"1";
            if(f) cout<<"1";
            else cout<<"-1";
        }
    }
    return 0;
}
