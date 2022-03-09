#include <stdio.h>

int main()
{
    long long a,b,s;
    scanf("%I64d %I64d %I64d",&a,&b,&s);
    if(a<0)
        a=-a;
    if(b<0)
        b=-b;
    if(s<a+b)
        printf("No");
    else if(s==a+b)
        printf("Yes");
    else
    {
        if((s-(a+b))%2==0)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}
