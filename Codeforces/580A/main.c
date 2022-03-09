#include <stdio.h>

int main()
{
    int n,a[100001],i,x=1,m=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
            x++;
        else
            x=1;
        if(x>m)
            m=x;
    }
    printf("%d",m);
    return 0;
}
