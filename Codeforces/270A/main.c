#include <stdio.h>

int main()
{
    int t,a[181],i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        if(360%(180-a[i])==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
