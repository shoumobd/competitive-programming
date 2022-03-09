#include <stdio.h>

int main()
{
    int a[5],i,s=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    if(s && !(s%5))
        printf("%d",s/5);
    else
        printf("-1");
    return 0;
}
