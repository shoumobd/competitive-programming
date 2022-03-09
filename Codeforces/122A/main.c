#include <stdio.h>

int main()
{
    int n,i,j,t,x,c,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=1;
        j=i;
        for(t=10;j;j/=t)
        {
            x=j%t;
            if(x!=4 && x!=7)
            {
                c=0;
                break;
            }
        }
        if(c)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
    }
    if(f)
        printf("YES");
    else
        printf("NO");
    return 0;
}
