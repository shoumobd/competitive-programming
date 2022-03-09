#include <stdio.h>

int main()
{
    char s[101],a[]="hello";
    int i,j=0,c=0;
    scanf("%s",s);
    for(i=0;s[i];i++)
    {
        if(s[i]==a[j])
            j++;
        if(j==5)
        {
            c=1;
            break;
        }
    }
    if(c)
        printf("YES");
    else
        printf("NO");
    return 0;
}
