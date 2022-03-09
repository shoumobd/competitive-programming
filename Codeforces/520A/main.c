#include <stdio.h>

int a[26];
int main()
{
    int n,i,f=1;
    char s[101];
    scanf("%d %s",&n,s);
    for(i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a[s[i]-'a']++;
        if(s[i]>='A' && s[i]<='Z')
            a[s[i]-'A']++;
    }
    for(i=0;i<26;i++)
    {
        if(!a[i])
        {
            f=0;
            break;
        }
    }
    if(f)
        printf("YES");
    else
        printf("NO");
    return 0;
}
