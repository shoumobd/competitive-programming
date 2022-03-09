#include <stdio.h>

int main()
{
    long long n,m,a,i,t=1,c=0;
    scanf("%I64d %I64d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%I64d",&a);
        if(a>=t)
        {
            c=c+a-t;
            t=a;
        }
        else
        {
            c=c+n-t+a;
            t=a;
        }
    }
    printf("%I64d",c);
    return 0;
}
