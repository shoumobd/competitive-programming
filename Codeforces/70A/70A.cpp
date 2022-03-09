#include <bits/stdc++.h>

using namespace std;

long long bigmod(long long a,long long p,long long m)
{
    long long c;
    if(!p)
        return 1;
    if(p%2)
    {
        return ((a%m)*(bigmod(a,p-1,m)))%m;
    }
    else
    {
        c=bigmod(a,p/2,m);
        return ((c%m)*(c%m))%m;
    }
}

int main()
{
    long long n;
    cin>>n;
    if(!n) cout<<1;
    else cout<<bigmod(3,n-1,1000003);
    return 0;
}
