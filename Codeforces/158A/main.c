#include <stdio.h>

int main()
{
    int n,k,a[100],i,s=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]>=a[k-1])
            s+=1;
    }
    printf("%d",s);
    return 0;
}
