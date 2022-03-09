#include <stdio.h>

int main()
{
    char s[1001][10];
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;s[i][j];j++)
        {
            if(s[i][j]=='O' && s[i][j-1]=='O')
            {
                s[i][j]='+';
                s[i][j-1]='+';
                c=1;
                break;
            }
        }
        if(c)
            break;
    }
    if(!c)
        printf("NO");
    else
    {
        printf("YES\n");
        for(i=0;i<n;i++)
            printf("%s\n",s[i]);
    }
    return 0;
}
