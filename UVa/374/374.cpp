#include <bits/stdc++.h>

using namespace std;

long long bigmod(long long a,long long p,int m)
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
    int m;
    long long b,p;
    while(scanf("%lld %lld %d",&b,&p,&m)!=EOF)
    {
        printf("%d\n",bigmod(b,p,m));
    }
    return 0;
}
