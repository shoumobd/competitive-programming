#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x=0,y=-1;
    cin>>n;
    //x=n/4;
    while(x<=n/4)
    {
        if(!((n-4*x)%7))
        {
            y=(n-4*x)/7;
            break;
        }
        x++;
    }
    if(y==-1) cout<<y;
    else
    {
        while(x--) cout<<4;
        while(y--) cout<<7;
    }
    return 0;
}
