#include <stdio.h>

int main()
{
    char s1[101],s2[101],s[101]={};
    int i;
    scanf("%s %s",s1,s2);

    for(i=0;s1[i];i++)
    {
        if(s1[i]==s2[i])
            s[i]='0';
        else
            s[i]='1';
    }
    printf("%s",s);
    return 0;
}
