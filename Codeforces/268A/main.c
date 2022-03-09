#include <stdio.h>

int main()
{
    int n,h[31],a[31],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&h[i],&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i)
                continue;
            if(a[j]==h[i])
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
