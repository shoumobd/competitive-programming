#include <stdio.h>

int main()
{
    int a1,a2,a3,b1,b2,b3,n,x,y;
    scanf("%d %d %d %d %d %d %d",&a1,&a2,&a3,&b1,&b2,&b3,&n);
    x=ceil((a1+a2+a3)/5.);
    y=ceil((b1+b2+b3)/10.);
    if((x+y)<=n)
        printf("YES");
    else
        printf("NO");
    return 0;
}
