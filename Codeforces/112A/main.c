#include <stdio.h>
#include <string.h>

int main()
{
    char s1[101],s2[101];
    int i;
    scanf("%s %s",s1,s2);
    for(i=0;s1[i];i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
            s1[i]+=32;
    }
    for(i=0;s2[i];i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
            s2[i]+=32;
    }
    printf("%d",strcmp(s1,s2));
    return 0;
}
