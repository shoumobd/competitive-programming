#include <stdio.h>

int main()
{
    int a[5],i,j;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    if(a[0]+a[1]>a[2] || a[1]+a[2]>a[3])
    {
        printf("TRIANGLE");
    }
    else if(a[0]+a[1]==a[2] || a[1]+a[2]==a[3])
    {
        printf("SEGMENT");
    }
    else
    {
        printf("IMPOSSIBLE");
    }
    return 0;
}
