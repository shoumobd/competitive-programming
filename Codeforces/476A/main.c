#include <stdio.h>

int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=ceil(n/2.);i<=n;i++)
    {
        if(!(i%m))
            break;
    }
    if(i>n)
        printf("-1");
    else
        printf("%d",i);
    return 0;
}
