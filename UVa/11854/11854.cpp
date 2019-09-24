#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a && b && c)
        {
            if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
                printf("right\n");
            else
                printf("wrong\n");
        }
        else
            break;
    }
    return 0;
}
