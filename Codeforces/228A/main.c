#include <stdio.h>

int main()
{
    long long a[5],i,j,f=0;
    for(i=0;i<4;i++)
    {
        scanf("%I64d",&a[i]);
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                f++;
                break;
            }
        }
    }
    printf("%I64d",f);
    return 0;
}
