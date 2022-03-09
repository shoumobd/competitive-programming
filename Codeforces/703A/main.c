#include <stdio.h>

int main()
{
    int n,m,c,M=0,C=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&m,&c);
        if(m>c)
            M++;
        else if(c>m)
            C++;
    }
    if(M>C)
        printf("Mishka");
    else if(C>M)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
    return 0;
}
