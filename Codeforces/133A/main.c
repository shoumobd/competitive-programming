#include <stdio.h>

int main()
{
    char s[101];
    int i,c=0;
    scanf("%s",s);
    for(i=0;s[i];i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            c=1;
            break;
        }
    }
    if(c)
        printf("YES");
    else
        printf("NO");
    return 0;
}
