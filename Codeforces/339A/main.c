#include <stdio.h>

int main()
{
    char s[101];
    int n,i,j;
    scanf("%s",s);
    for(n=0;s[n];n++);
    for(i=0;i<n-2;i+=2)
    {
        for(j=i+2;j<n;j+=2)
        {
            if(s[i]>s[j])
            {
                s[i]^=s[j];
                s[j]^=s[i];
                s[i]^=s[j];
            }
        }
    }
    printf("%s",s);
    return 0;
}
