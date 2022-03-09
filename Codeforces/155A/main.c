#include <stdio.h>

int main()
{
    int n,a[1001],i,min,max,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            {
                max=a[i];
                c++;
            }
        else if(a[i]<min)
            {
                min=a[i];
                c++;
            }
    }
    printf("%d",c);
    return 0;
}
