#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,i,m,n;
    for(i=1;;i++)
    {
        scanf("%lld %lldd",&a,&b);
        if(!a && !b)
            break;
        m=a*(a-1)/2;
        n=b*(b-1)/2;
        printf("Case %lld: %lld\n",i,m*n);
    }
    return 0;
}
