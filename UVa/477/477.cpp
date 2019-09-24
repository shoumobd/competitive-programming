#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,i,f1;
    double ax[11],ay[11],bx[11],by[11],r[11],x,y,d;
    char f[11];
    string s;
    n=0;
    while(1)
    {
        getline(cin,s);
        if(s[0]=='*')
            break;
        stringstream ss(s);
        if(s[0]=='r')
            ss>>f[n]>>ax[n]>>ay[n]>>bx[n]>>by[n];
        else if(s[0]=='c')
            ss>>f[n]>>ax[n]>>ay[n]>>r[n];
        n++;
    }
    t=0;
    while(1)
    {
        scanf("%lf %lf",&x,&y);
        if(fabs(x-9999.9)<1e-3 && fabs(y-9999.9)<1e-3)
            break;
        f1=0;
        t++;
        for(i=0;i<n;i++)
        {
            if(f[i]=='r' && x>ax[i] && x<bx[i] && y<ay[i] && y>by[i])
            {
                f1=1;
                printf("Point %d is contained in figure %d\n",t,i+1);
            }
            else if(f[i]=='c')
            {
                d=pow((ax[i]-x),2.0)+pow((ay[i]-y),2.0);
                if(d<pow(r[i],2.0))
                {
                    f1=1;
                    printf("Point %d is contained in figure %d\n",t,i+1);
                }
            }
        }
        if(!f1)
        {
            printf("Point %d is not contained in any figure\n",t);
        }
    }
    return 0;
}
