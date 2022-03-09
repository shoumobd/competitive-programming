#include <stdio.h>

int main()
{
    long long n;
    scanf("%I64d",&n);
    if(n%2)
        printf("%I64d",-(n/2+1));
    else
        printf("%I64d",n/2);
    return 0;
}
