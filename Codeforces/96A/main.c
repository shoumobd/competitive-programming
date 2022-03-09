#include <stdio.h>

int main()
{
    char s[101];
    int i,c=1,t=0;
    scanf("%s",s);
    for(i=0;s[i];i++)
    {
        if(i)
        {
            if(s[i]==s[i-1])
                c++;
            else
                c=1;
        }
        if(c==7)
        {
            t=1;
            break;
        }
    }
    if(t)
        printf("YES");
    else
        printf("NO");
    return 0;
}
