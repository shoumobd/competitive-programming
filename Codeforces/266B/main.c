#include <stdio.h>

int main()
{
    char s[51];
    int n,t,i;
    scanf("%d %d %s",&n,&t,s);
    while(t--)
    {
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
    printf("%s",s);
    return 0;
}
