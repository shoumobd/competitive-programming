#include <stdio.h>

int main()
{
    int d1,d2,d3,a[4],i,j;
    scanf("%d %d %d",&d1,&d2,&d3);
    a[0]=2*(d1+d2);
    a[1]=2*(d2+d3);
    a[2]=2*(d3+d1);
    a[3]=d1+d2+d3;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
            {
                a[i]^=a[j];
                a[j]^=a[i];
                a[i]^=a[j];
            }
        }
    }
    printf("%d",a[0]);
    return 0;
}
