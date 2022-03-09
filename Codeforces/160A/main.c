#include <stdio.h>

int main()
{
    int n,a[101],s=0,x=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                a[i]^=a[j];
                a[j]^=a[i];
                a[i]^=a[j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        x+=a[i];
        if(x>s-x)
            break;

    }
    if(i<n)
        printf("%d",i+1);
    else
        printf("%d",i);
    return 0;
}
