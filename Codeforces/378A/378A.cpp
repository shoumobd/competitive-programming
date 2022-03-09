#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,p1=0,d=0,p2=0,i;
    cin>>a>>b;
    for(i=1; i<=6; i++)
    {
        if(abs(a-i)<abs(b-i))
            p1++;
        else if(abs(a-i)>abs(b-i))
            p2++;
        else
            d++;
    }
    cout<<p1<<" "<<d<<" "<<p2;
    return 0;
}
