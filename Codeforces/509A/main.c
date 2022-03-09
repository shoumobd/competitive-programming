#include <stdio.h>

int main()
{
    int n,a[102],i,m;
    scanf("%d",&n);
    for(i=1;i<=n*n;i++)
    {
        if(i<=n || i%n==1)
            a[i]=1;
        else
            a[i]=a[i-1]+a[i-n];
        m=a[i];
    }
    printf("%d",m);
    return 0;
}
