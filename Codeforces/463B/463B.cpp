#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,h,d=0,e=0,ho=0;
    cin>>n;
    while(n--)
    {
        cin>>h;
        e+=(ho-h);
        if(e<0)
        {
            d+=(-e);
            e=0;
        }
        ho=h;
    }
    cout<<d;
    return 0;
}
