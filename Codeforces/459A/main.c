#include <stdio.h>

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,t,t1,t2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x1==x2)
    {
        t=y2-y1;
        x3=x1+t;
        y3=y1;
        x4=x1+t;
        y4=y1+t;
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else if(y1==y2)
    {
        t=x2-x1;
        x3=x1;
        y3=y1+t;
        x4=x1+t;
        y4=y1+t;
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else if(abs(x2-x1)==abs(y2-y1))
    {
        t1=x2-x1;
        t2=y2-y1;
        x3=x1+t1;
        y3=y1;
        x4=x1;
        y4=y1+t2;
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
