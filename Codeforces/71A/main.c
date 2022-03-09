#include <stdio.h>

int main()
{
    char s[101];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        for(j=0;s[j];j++);
        if(j>10)
            printf("%c%d%c\n",s[0],j-2,s[j-1]);
        else
            printf("%s\n",s);
    }
    return 0;
}
