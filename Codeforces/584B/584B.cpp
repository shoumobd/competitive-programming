#include <bits/stdc++.h>

using namespace std;

long long bigmod(long long a,long long p,long long m)
{
    long long c;
    if(!p)
        return 1;
    if(p%2)
    {
        return((a%m)*(bigmod(a,p-1,m)))%m;
    }
    else
    {
        c=bigmod(a,p/2,m);
        return ((c%m)*(c%m))%m;
    }
}

int main()
{
    long long n,x,y,z;
    scanf("%I64d",&n);
    x=bigmod(3,3*n,1e9+7);
    y=bigmod(7,n,1e9+7);
    z=bigmod(x-y,1,1e9+7);
    if(z<0)
        z=z+1e9+7;
    printf("%I64d",z);
    return 0;
}
