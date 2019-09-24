#include <bits/stdc++.h>

using namespace std;

#define pi 2*acos(0.0)

int main()
{
    double D,V,V1,x,d;
    while(1)
    {
        scanf("%lf %lf",&D,&V);
        if(!D && !V)
            break;
        V1=pi*pow(D,3)/4-V;
        x=(12*V1-pi*pow(D,3))/(2*pi);
        d=pow(x,(1/3.));
        printf("%.3lf\n",d);
    }
    return 0;
}
