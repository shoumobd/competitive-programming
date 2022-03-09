#include <stdio.h>

int main()
{
    int n,p[101],a[101],i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
        a[p[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
