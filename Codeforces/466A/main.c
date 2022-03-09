#include <stdio.h>
#include<math.h>

int main()
{
    int n,m,a,b,c;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    if(m*a<=b)
        printf("%d",n*a);
    else
    {
        if(((n%m)*a)<b)
        {
            c=((n/m)*b)+((n-(n/m)*m)*a);
            printf("%d",c);
        }
        else
        {
            c=((n/m)+1)*b;
            printf("%d",c);
        }
    }
    return 0;
}
