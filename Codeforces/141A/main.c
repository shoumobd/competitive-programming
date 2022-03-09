#include <stdio.h>

int main()
{
    char s1[101],s2[101],s[101];
    int i,j,c;
    scanf("%s %s %s",s1,s2,s);
    while(1)
    {
        for(i=0;s1[i];i++)
        {
            c=0;
            for(j=0;s[j];j++)
            {
                if(s1[i]==s[j])
                {
                    s[j]='1';
                    c=1;
                    break;
                }
            }
            if(!c)
                break;
        }
        if(!c)
            break;
        for(i=0;s2[i];i++)
        {
            c=0;
            for(j=0;s[j];j++)
            {
                if(s2[i]==s[j])
                {
                    s[j]='1';
                    c=1;
                    break;
                }
            }
            if(!c)
                break;
        }
        break;
    }
    for(i=0;s[i];i++)
    {
        if(s[i]!='1')
        {
            c=0;
            break;
        }
    }
    if(c)
        printf("YES");
    else
        printf("NO");
    return 0;
}
