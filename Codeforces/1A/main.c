#include <stdio.h>
int main()
{
    long long n,m,a,b,c;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
    if(n%a==0)
        b=n/a;
    else
        b=(n/a)+1;
    if(m%a==0)
        c=m/a;
    else
        c=(m/a)+1;
    printf("%I64d",b*c);
    return 0;
}
