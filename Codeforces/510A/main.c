#include <stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(i%2)
        {
            for(j=1;j<=m;j++)
                printf("#");
            printf("\n");
        }
        else if(!(i%4))
        {
            printf("#");
            for(j=2;j<=m;j++)
                printf(".");
            printf("\n");
        }
        else
        {
            for(j=1;j<m;j++)
                printf(".");
            printf("#\n");
        }
    }
    return 0;
}
