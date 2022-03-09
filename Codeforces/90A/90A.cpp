#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,r,g,b,r1,g1,b1,mx;
    cin>>r>>g>>b;
    r1=1+(r-1)/2;
    g1=1+(g-1)/2;
    b1=1+(b-1)/2;
    if(!r)
        r1--;
    if(!g)
        g1--;
    if(!b)
        b1--;
    mx=max(r1,max(g1,b1));
    x=30+mx*3-1;
    //cout<<mx<<" "<<r1<<" "<<g1<<" "<<b1<<"\n";
    if(b1<mx)
    {
        x--;
        if(g1<mx)
            x--;
    }
    if(x<30) x=0;
    cout<<x;
    return 0;
}
