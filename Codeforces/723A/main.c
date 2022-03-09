#include <stdio.h>

int main()
{
    int x1,x2,x3,i,j=0,a[3];
    scanf("%d %d %d",&x1,&x2,&x3);
    for(i=1;;i++)
    {
        if(i==x1 || i==x2 || i==x3)
        {
            a[j]=i;
            j++;
        }
        if(j==3)
            break;
    }
    printf("%d",a[2]-a[0]);
    return 0;
}
