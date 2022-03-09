#include <stdio.h>

int main()
{
    char max[102]={},min[102]={};
    int m,s,i,c,t;
    scanf("%d %d",&m,&s);
    if((m>1 && !s) || s>9*m)
        printf("-1 -1");
    else
    {
        c=s;
        for(i=1;i<=m;i++)
        {
            t=c;
            if(t>9)
                t=9;
            c-=t;
            max[i-1]=t+'0';
        }
        c=s;
        for(i=1;i<=m;i++)
        {
            t=c-9*(m-i);
            if(t<0)
            {
                if(i==1)
                    t=1;
                else
                    t=0;
            }
            c-=t;
            min[i-1]=t+'0';
        }
        printf("%s %s",min,max);
    }
    return 0;
}
