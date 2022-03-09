#include <stdio.h>

int main()
{
    int n,i,a=0,d=0;
    char s[100001];
    scanf("%d %s",&n,s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        printf("Anton");
    else if(a<d)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}
