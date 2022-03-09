#include <stdio.h>

int main()
{
    char s[101];
    int n,i,u=0,l=0;
    scanf("%s",s);
    for(n=0;s[n];n++)
    {
        if(s[n]>='a' && s[n]<='z')
            l++;
        else
            u++;
    }
    if(l>=u)
    {
        for(i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=32;
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                s[i]-=32;
        }
    }
    printf("%s",s);
    return 0;
}
