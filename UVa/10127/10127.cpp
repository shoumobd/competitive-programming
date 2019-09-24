#include <bits/stdc++.h>

using namespace std;

long long bigmod(long long a,int p,int m)
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
    int n,i;
    long long a;
    while(scanf("%d",&n)!=EOF)
    {
        a=n;
        for(i=1;;i++)
        {
            a=10*a+1;
            if(!bigmod(a,1,n))
                break;
            a=bigmod(a,1,n);
        }
        printf("%d\n",i);
    }
    return 0;
}
