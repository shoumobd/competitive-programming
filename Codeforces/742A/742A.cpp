#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    long long x=1;
    cin>>n;
    if(!n)
        x=1;
    else if(n%4==1)
        x=8;
    else if(n%4==2)
        x=4;
    else if(n%4==3)
        x=2;
    else if(n%4==0)
        x=6;
        cout<<x;
    return 0;
}
