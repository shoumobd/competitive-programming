#include <stdio.h>

int main()
{
    long long n,m;
    scanf("%I64d %I64d",&n,&m);
    if(n==1)
        printf("1");
    else if(n%2==0)
    {
        if(m>n/2)
            printf("%I64d",m-1);
        else
            printf("%I64d",m+1);
    }
    else
    {
        if(m>=n/2+1)
            printf("%I64d",m-1);
        else
            printf("%I64d",m+1);
    }
    return 0;
}
