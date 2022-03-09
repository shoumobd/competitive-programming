#include <stdio.h>

int main()
{
    long long a,b,i,s=0;
    scanf("%I64d %I64d",&a,&b);
    for(i=1;a>0 && b>0;i++)
    {
        if(a>b)
        {
            s+=a/b;
            a=a%b;
        }
        else if(b>a)
        {
            s+=b/a;
            b=b%a;
        }
    }
    printf("%I64d",s);
    return 0;
}
