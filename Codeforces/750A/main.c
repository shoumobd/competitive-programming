#include <stdio.h>

int main()
{
    int n,k,i,s=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        s=s+5*i;
        if(s>240-k)
            break;
    }

    printf("%d",i-1);
    return 0;
}
