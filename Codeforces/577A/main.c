#include <stdio.h>

int main()
{
    int n,x,a=0,i;
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++)
    {
        if(x%i==0 && x/i<=n)
            a+=1;
    }
    printf("%d",a);
    return 0;
}
