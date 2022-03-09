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
    int n,k,m,i,c=0,x1=0,x2=0;
    scanf("%d %d",&n,&k);
    sieve(n);
    for(m=6;m<=n;m++)
    {
        if(prime[m])
        {
            for(i=2;i<m;i++)
            {
                if(prime[i] && !x1)
                    x1=i;
                else if(prime[i])
                {
                    x2=i;
                    if(x1+x2==m-1)
                    {
                        c++;
                    }
                    x1=i;
                    x2=0;
                }
            }
        }
    }
    if(c>=k)
        printf("YES");
    else
        printf("NO");
    return 0;
}
