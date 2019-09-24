#include <bits/stdc++.h>

using namespace std;

#define pi acos(-1.0)

int main()
{
    double a,A,A1,A2,A3,A4,A5,A6,A7,A8,A9;
    while((scanf("%lf",&a))!=EOF)
    {
        A=a*a;
        A1=pi*a*a/4;
        A2=pi*a*a/6;
        A3=a*a*sin(pi/3)/2;
        A4=A2-A3;
        A5=A1-A2-A4;
        A6=A-4*A5;
        A7=A-A1;
        A8=4*(A7-A5);
        A9=A-A6-A8;
        printf("%.3lf %.3lf %.3lf\n",A6,A9,A8);
    }
    return 0;
}
