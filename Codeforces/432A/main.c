#include <stdio.h>

int main()
{
    int n,k,a[2001],i,j,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=5-k)
            c++;
    }
    printf("%d",c/3);
    return 0;
}
