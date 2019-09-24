#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c1,c2,a,b;
    while(1)
    {
        scanf("%d %d",&c1,&c2);
        if(c1==-1 && c2==-1)
            break;
        if(c1>c2)
        {
            a=c2;
            b=c1;
        }
        else
        {
            a=c1;
            b=c2;
        }
        if((b-a)<=(a+100-b))
            printf("%d\n",b-a);
        else
            printf("%d\n",a+100-b);
    }
    return 0;
}
