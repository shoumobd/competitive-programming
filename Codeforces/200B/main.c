#include <stdio.h>

int main()
{
    int n,k,a[100],i;
    float s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%15.12f",s/n);
    return 0;
}
