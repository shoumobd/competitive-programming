#include <stdio.h>

int main()
{
    int a,b,c,x[7],i,m=0;
    scanf("%d %d %d",&a,&b,&c);
    x[0]=a+b+c;
    x[1]=a*b*c;
    x[2]=a+(b*c);
    x[3]=(a+b)*c;
    x[4]=a*(b+c);
    x[5]=(a*b)+c;
    for(i=0;i<6;i++)
    {
        if(x[i]>m)
            m=x[i];
    }
    printf("%d",m);
    return 0;
}
