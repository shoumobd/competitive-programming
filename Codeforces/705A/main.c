#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%2)
            printf("I hate that ");
        else
            printf("I love that ");
    }
    if(n%2)
        printf("I hate it");
    else
        printf("I love it");
    return 0;
}
