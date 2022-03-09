#include <stdio.h>
#include <string.h>

int main()
{
    int n,x=0;
    char s[4];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        if(!strcmp(s,"X++") || !strcmp(s,"++X"))
            x++;
        else
            x--;
    }
    printf("%d",x);
    return 0;
}
