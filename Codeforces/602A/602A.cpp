#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long b,n1,bx,x,n2,by,y,i,xa=0,ya=0;
    cin>>n1>>bx;
    b=pow(bx,n1-1);
    for(i=0;i<n1;i++)
    {
        cin>>x;
        xa+=(b*x);
        b/=bx;
    }
    cin>>n2>>by;
    b=pow(by,n2-1);
    for(i=0;i<n2;i++)
    {
        cin>>y;
        ya+=(b*y);
        b/=by;
    }
    //cout<<xa<<" "<<ya<<"\n";
    if(xa==ya) cout<<"=";
    if(xa>ya) cout<<">";
    if(xa<ya) cout<<"<";
    return 0;
}
