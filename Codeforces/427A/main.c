#include <stdio.h>

int main()
{
    int n,a,s=0,c=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        s+=a;
        if(s<0)
        {
            c++;
            s=0;
        }
    }
    printf("%d",c);
    return 0;
}
