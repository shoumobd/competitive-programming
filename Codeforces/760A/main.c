#include <stdio.h>

int main()
{
    int m,d,dd,x;
    scanf("%d %d",&m,&d);
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        dd=31;
    else if(m==2)
        dd=28;
    else
        dd=30;
    x=dd-8+d;
    if(x%7==0)
        printf("%d",x/7+1);
    else
        printf("%d",x/7+2);
    return 0;
}
