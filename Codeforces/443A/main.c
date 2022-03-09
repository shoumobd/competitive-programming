#include <stdio.h>

int a[26];
int main()
{
    char s[2000];
    int i,c=0;
    fgets (s,2000,stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i])
            c++;
    }
    printf("%d",c);
    return 0;
}
