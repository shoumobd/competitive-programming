#include <stdio.h>

int main()
{
    int a,b,s,x,c;
    scanf("%d %d",&a,&b);
    s=a;
    x=s;
    while(x>=b)
    {
        s+=x/b;
        c=x%b;
        x=x/b+c;
    }
    printf("%d",s);
    return 0;
}
