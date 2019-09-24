#include <bits/stdc++.h>

using namespace std;

bool prime[1000001];

void sieve(int n)
{
    memset(prime, true, sizeof(prime));
    int i,p;
    for(p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(i=p*2;i<=n;i+=p)
                prime[i]=false;
        }
    }
}

int main()
{
    int n,c,i;
    sieve(1000001);
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        c=0;
        for(i=2;i<=n;i++)
        {
            if(prime[i] && !(n%i))
                c++;
        }
        printf("%d : %d\n",n,c);
    }
    return 0;
}
