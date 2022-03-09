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
    int f=1,i;
    string x,y,z="";
    cin>>x>>y;
    for(i=0;i<x.size();i++)
    {
        z+=min(x[i],y[i]);
        if(x[i]<y[i])
        {
            f=0;
            break;
        }
    }
    if(f) cout<<z;
    else cout<<"-1";
    return 0;
}
