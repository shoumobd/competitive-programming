#include <stdio.h>

int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(a+b>=n-1)
        printf("%d",n-a);
    else
        printf("%d",b+1);
    return 0;
}
