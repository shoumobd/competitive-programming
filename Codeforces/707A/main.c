#include <stdio.h>

int main()
{
    int n,m,i,j,f=0;
    char a[101][101];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y')
                f=1;
        }
    }
    if(f)
        printf("#Color");
    else
        printf("#Black&White");
    return 0;
}
