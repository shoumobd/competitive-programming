#include <stdio.h>

int main()
{
    char a[100001],s[100001];
    int i,j=0,t=0;
    scanf("%s",a);
    for(i=0;a[i];i++)
    {
        if(a[i]=='0' && t==0)
        {
            t=1;
            continue;
        }
        s[j]=a[i];
        j++;
    }
        s[i-1]='\0';
    printf("%s",s);
    return 0;
}
