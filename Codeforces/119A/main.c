#include <stdio.h>

int gcd(int a,int b)
{
    if(!b)
        return a;
    if(!(a%b))
        return b;
    return gcd(b,a%b);
}
int main()
{
    int a,b,n,g,c;
    scanf("%d %d %d",&a,&b,&n);
    while(1)
    {
        g=gcd(a,n);
        if(n>=g)
        {
            n-=g;
        }
        else
        {
            c=1;
            break;
        }
        g=gcd(b,n);
        if(n>=g)
        {
            n-=g;
        }
        else
        {
            c=0;
            break;
        }
    }
    printf("%d",c);
    return 0;
}

