#include <stdio.h>

int main()
{
    int n,h,a[1001],i,c=0;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>h)
            c+=2;
        else
            c++;
    }
    printf("%d",c);
    return 0;
}
