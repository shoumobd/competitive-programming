#include <stdio.h>

int main()
{
    char s[110];
    int i,j,c=1;
    scanf("%s",s);
    for(i=0;s[i];i++);
    if(s[0]>='a' && s[0]<='z')
    {
        for(j=1;j<i;j++)
        {
            if(s[j]>'Z')
            {
                c=0;
                break;
            }
        }
        if(c)
        {
            printf("%c",s[0]-32);
            for(j=1;j<i;j++)
                printf("%c",s[j]+32);
        }
        else
        {
            printf("%c",s[0]);
            for(j=1;j<i;j++)
                printf("%c",s[j]);
        }
    }
    else
    {
        for(j=0;j<i;j++)
        {
            if(s[j]>'Z')
            {
                c=0;
                break;
            }
        }
        if(c)
        {
            for(j=0;j<i;j++)
                printf("%c",s[j]+32);
        }
        else
        {
            for(j=0;j<i;j++)
                printf("%c",s[j]);
        }
    }
    return 0;
}
