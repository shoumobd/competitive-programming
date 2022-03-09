#include <stdio.h>

int main()
{
    int i,j=0;
    char s[101],o[201]={};
    scanf("%s",s);
    for(i=0;s[i];i++)
    {
        if(!(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'))
        {
            if(s[i]>='a' && s[i]<='z')
            {
                o[j]='.';
                o[j+1]=s[i];
                j+=2;
            }
            else
            {
                o[j]='.';
                o[j+1]=s[i]+32;
                j+=2;
            }
        }
    }
    printf("%s",o);
    return 0;
}
