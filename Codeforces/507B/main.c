#include <stdio.h>
#include <math.h>

int main()
{
    double r,x,y,x1,y1,d;
    scanf("%lf %lf %lf %lf %lf",&r,&x,&y,&x1,&y1);
    d=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    printf("%.0lf",ceil(d/(2*r)));
    return 0;
}
