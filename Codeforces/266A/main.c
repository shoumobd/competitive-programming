#include <stdio.h>

int main()
{
    int n,x=0,i;
    char s[51];
    scanf("%d %s",&n,&s);
    for(i=0;i<n;i++)
    {
        if(i>0 && s[i]==s[i-1])
            x+=1;
    }
    printf("%d",x);
    return 0;
}
