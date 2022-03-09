#include <stdio.h>

int main()
{
    long long n,x1,x2;
    scanf("%I64d",&n);
    if(n>=0)
        printf("%I64d",n);
    else
    {
        x1=n/10;
        x2=n%10+(n/100)*10;
        if(x1>x2)
            printf("%I64d",x1);
        else
            printf("%I64d",x2);
    }
    return 0;
}
