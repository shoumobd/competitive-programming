#include <stdio.h>

int main()
{
    char s[101];
    int n,i,j,x=1,c;
    scanf("%s",s);
    for(n=0;s[n];n++);
    for(i=1;i<n;i++)
    {
        c=1;
        for(j=0;j<i;j++)
        {
            if(s[i]==s[j])
                {
                    c=0;
                    break;
                }
        }
        if(c)
            x++;
    }
    if(x%2)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");
    return 0;
}
