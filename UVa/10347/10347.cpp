#include <bits/stdc++.h>

using namespace std;

int main()
{
    double u,v,w,s,x;
    while((scanf("%lf %lf %lf",&u,&v,&w))!=EOF)
    {
        s=(u+v+w)/2;
        x=s*(s-u)*(s-v)*(s-w);
        if(x>0)
        {
            printf("%.3lf\n",4*sqrt(x)/3);
        }
        else
        {
            printf("-1.000\n");
        }
    }
    return 0;
}
