#include <stdio.h>

int main()
{
    char s[201];
    int n,i,c=0;
    scanf("%s",s);
    for(n=0;s[n];n++);
    for(i=0;i<n-2;i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(c)
                s[i]=' ';
            else
                s[i]='\0';
            s[i+1]='\0';
            s[i+2]='\0';
            i+=2;
            c=0;
        }
        else
            c=1;
    }
    for(i=0;i<n;i++)
    {
        if(s[i])
            printf("%c",s[i]);
    }
    return 0;
}
