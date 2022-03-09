#include <stdio.h>

int main()
{
    int n,a[101],i,c=0,maxin,minin,max=0,min=101;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=min)
        {
            min=a[i];
            minin=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            maxin=i;
        }
    }
    for(;maxin>0;maxin--)
    {
        c++;
        if(maxin-1==minin)
            minin++;
    }
    for(;minin<n-1;minin++)
    {
        c++;
    }
    printf("%d",c);
    return 0;
}
