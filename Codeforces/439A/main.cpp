#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,i,t,tt=0,f=1,c=0;
    scanf("%d %d",&n,&d);
    while(n--)
    {
        scanf("%d",&t);
        tt+=t;
        if(tt>d)
        {
            f=0;
            break;
        }
        if(n)
        {
            for(i=1;i<3;i++)
            {
                tt+=5;
                c++;
                if(tt>d)
                {
                    c--;
                    break;
                }
            }
        }
        else
        {
            while(1)
            {
                tt+=5;
                c++;
                if(tt>d)
                {
                    c--;
                    break;
                }
            }
        }
    }
    if(f)
        printf("%d",c);
    else
        printf("-1");
    return 0;
}
