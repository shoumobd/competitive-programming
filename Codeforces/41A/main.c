#include <stdio.h>

int main()
{
    char s[200],t[200];
    int i,j,k,c=1;
    scanf("%s %s",s,t);
    for(i=0;s[i];i++);
    for(j=0;t[j];j++);
    if(i!=j)
        c=0;
    else
    {
        for(k=0;k<i;k++)
        {
            if(s[k]!=t[i-k-1])
            {
                c=0;
                break;
            }
        }
    }
    if(c)
        printf("YES");
    else
        printf("NO");
    return 0;
}
