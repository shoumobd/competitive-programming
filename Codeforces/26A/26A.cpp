#include <bits/stdc++.h>

using namespace std;

bool prime[100001];

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
    int n,m,i,c=0,s=0;
    scanf("%d",&n);
    sieve(n);
    for(m=6;m<=n;m++)
    {
        c=0;
        if(!prime[m])
        {
            for(i=2;i<m;i++)
            {
                if(prime[i] && !(m%i))
                {
                    c++;
                }
            }
            if(c==2)
                s++;
        }
    }
    printf("%d",s);
    return 0;
}
