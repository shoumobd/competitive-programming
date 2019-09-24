#include <bits/stdc++.h>

using namespace std;

long long primeFactors(long long n)
{
    long long oldn=n;
    long long sum=0,s=1;
    while (n%2 == 0)
    {
        s*=2;
        n=n/2;
    }
    if(s!=1)
        sum+=s;
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        s=1;
        while (n%i == 0)
        {
            s*=i;
            n = n/i;
        }
        if(s!=1)
            sum+=s;
    }
    if(n>1)
        sum+=n;
    if(oldn==1)
        sum+=2;
    if(sum==oldn)
        return sum+1;
    return sum;
}

int main()
{
    long long n;
    int t;
    for(t=1;;t++)
    {
        scanf("%lld",&n);
        if(!n)
            break;
        printf("Case %d: %lld\n",t,primeFactors(n));
    }
    return 0;
}
