#include <stdio.h>

int main()
{
    int n,i,a[3001],s=0,t=0;
    scanf("%d",&n);
    for(i=0;i<3*n;i++)
    {
        scanf("%d",&a[i]);
        t+=a[i];
        if(i%3==2)
        {
            if(t>=2)
                s++;
            t=0;
        }
    }
    printf("%d",s);
    return 0;
}
