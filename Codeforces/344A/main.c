#include <stdio.h>

int main()
{
    int n,a[100001],i,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i>0)
        {
            if(a[i-1]%10==a[i]/10)
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
