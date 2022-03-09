#include <stdio.h>

int main()
{
    int n,a[101],i,t=0,x,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(t==0)
        {
            x=a[i];
            t=1;
        }
        else if(a[i]>x)
            x=a[i];
    }
    for(i=0;i<n;i++)
    {
        s+=x-a[i];
    }
    printf("%d",s);
    return 0;
}
