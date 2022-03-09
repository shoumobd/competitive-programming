#include <stdio.h>

int main()
{
    int n,a[100001],b[100001],c[100001],i,j,k,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==n-i && i==0)
        {
            printf("%d\n",a[i]);
            c[i]=a[i];
        }
        else if(a[i]>n-i)
        {
            for(k=i-1;c[k];k--);
            if(k==0)
            {
                for(j=i;b[j];j--);
                {
                    printf("%d",a[i]);
                    c[i]=a[i];
                    for(j+=1;j<=i;j++)
                    {
                        printf(" %d",b[j]);
                        c[i]=b[i];
                    }
                    printf("\n");
                    p=1;
                }
            }
        }
        else if(a[i]==n-i)
        {
            if(p)
            {
                printf("%d\n",a[i]);
                c[i]=a[i];
            }
            else
            {
                b[n-a[i]]=a[i];
                printf("\n");
            }
        }
        else if(a[i]<n-i)
        {
            b[n-a[i]]=a[i];
            printf("\n");
            p=0;
        }
    }
    return 0;
}
