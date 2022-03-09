#include <stdio.h>

int main()
{
    int n,i=0,s=0;
    scanf("%d",&n);
    while(s<n)
    {
        i++;
        s=s+i*(i+1)/2;
        if(s>n)
            i--;
    }
    printf("%d",i);
    return 0;
}
