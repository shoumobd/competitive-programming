#include <stdio.h>

int main()
{
    int a[5][5],i,j,x;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j])
                x=abs(i-2)+abs(j-2);
        }
    }
    printf("%d",x);
    return 0;
}
