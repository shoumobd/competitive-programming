#include <bits/stdc++.h>

using namespace std;

bool prime[32770];

int a[32770];

void sieve(int n)
{
    memset(prime, true, sizeof(prime));
    int i,p;
    for(p=2;p*p<n;p++)
    {
        if(prime[p]==true)
        {
            for(i=p*2;i<=n;i+=p)
                prime[i]=false;
        }
    }
    for(p=2;p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(i=2;i<=p;i++)
            {
                if(prime[i]==true && i+p<=n)
                    a[i+p]++;
            }
        }
    }
}

int main()
{
    int n;
    sieve(32769);
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        printf("%d\n",a[n]);
    }
    return 0;
}
