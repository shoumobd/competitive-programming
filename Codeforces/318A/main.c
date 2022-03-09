#include <stdio.h>

int main()
{
    long long n,k;
    scanf("%I64d %I64d",&n,&k);
    if(n%2)
    {
        if(k<=(n+1)/2)
            printf("%I64d",1+(k-1)*2);
        else
            printf("%I64d",(k-(n+1)/2)*2);

    }
    else
    {
        if(k<=n/2)
            printf("%I64d",1+(k-1)*2);
        else
            printf("%I64d",(k-(n+1)/2)*2);

    }
    return 0;
}
