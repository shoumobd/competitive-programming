#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>a)
    {
        a^=b;
        b^=a;
        a^=b;
    }
    printf("%d %d",b,(a-b)/2);
    return 0;
}
