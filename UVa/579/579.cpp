#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h,m,x,y,a;
    char c;
    cout.precision(3);
    cout<<fixed;
    while(1)
    {
        cin>>h>>c>>m;
        if(fabs(h-0.0)<0.00001 && fabs(h-0.0)<0.00001) break;
        x=6*m;
        y=30*h;
        y+=(0.5*m);
        a=x-y;
        if(a<0.0) a*=-1;
        if(360.0-a<a) a=360.0-a;
        cout<<a<<"\n";
    }
}
