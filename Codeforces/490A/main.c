#include <stdio.h>

int main()
{
    int n,t[5001],a[5],i,min=100000,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
        a[t[i]]++;
    }
    for(i=1;i<4;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("%d\n",min);
    while(min--)
    {
        c=1;
        while(c<4)
        {
            for(i=0;i<n;i++)
            {
                if(t[i]==c)
                {
                    printf("%d ",i+1);
                    t[i]=0;
                    break;
                }
            }
            c++;
        }
        printf("\n");
    }
    return 0;
}
