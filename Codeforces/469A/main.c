#include <stdio.h>

int main()
{
    int n,p,q,a,b[101]={},i,c=1;
    scanf("%d %d",&n,&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&a);
        b[a]++;
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&a);
        b[a]++;
    }
    for(i=1;i<=n;i++)
    {
        if(!b[i])
        {
            c=0;
            break;
        }
    }
    if(c)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}
