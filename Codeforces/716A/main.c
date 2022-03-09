#include <stdio.h>

int main()
{
    long long n,c,a[100001],i,x=1;
    scanf("%I64d %I64d",&n,&c);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        if(i)
        {
            if(a[i]-a[i-1]<=c)
                x++;
            else
                x=1;
        }
    }
    printf("%I64d",x);
    return 0;
}
