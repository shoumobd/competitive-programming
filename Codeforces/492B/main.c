#include <stdio.h>

int main()
{
    int n,l,a[1010],i,j;
    double d;
    scanf("%d %d",&n,&l);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]^=a[j];
                a[j]^=a[i];
                a[i]^=a[j];
            }
        }
    }
    d=a[0];
    for(i=1;i<n;i++)
    {
        if(d<(a[i]-a[i-1])/2.0)
            d=(a[i]-a[i-1])/2.0;
    }
    if(d<l-a[n-1])
        d=l-a[n-1];
    printf("%.10lf",d);
    return 0;
}
