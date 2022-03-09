#include <stdio.h>

int main()
{
    int n,x,a[101],i,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[i]=x%2;
    }
    if(a[0]+a[1]+a[2]==1 || a[0]+a[1]+a[2]==0)
        p=1;
    else
        p=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==p)
            break;
    }
    printf("%d",i+1);
    return 0;
}
