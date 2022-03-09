#include <stdio.h>

int main()
{
    long long n,t,i,x=0,c=0;
    scanf("%I64d",&n);
    for(i=10;n;n/=i)
    {
        t=n%i;
        if(t==4 || t==7)
            x++;
    }
    if(x)
    {
        c=1;
        for(i=10;x;x/=i)
        {
            t=x%i;
            if(t!=4 && t!=7)
            {
                c=0;
                break;
            }
        }
    }
    if(c)
        printf("YES");
    else
        printf("NO");
    return 0;
}
