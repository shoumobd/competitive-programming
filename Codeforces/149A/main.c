#include <stdio.h>

int main()
{
    int k,a[12],c=0,f=0,i,j;
    scanf("%d",&k);
    for(i=0;i<12;i++)
        scanf("%d",&a[i]);
    for(i=0;i<11;i++)
    {
        for(j=i+1;j<12;j++)
        {
            if(a[i]<a[j])
            {
                a[i]^=a[j];
                a[j]^=a[i];
                a[i]^=a[j];
            }
        }
    }
    for(i=0;i<13;i++)
    {
        if(c>=k)
        {
            f=1;
            break;
        }
        if(i==12)
            break;
        c+=a[i];
    }
    if(f)
        printf("%d",i);
    else
        printf("-1");
    return 0;
}
