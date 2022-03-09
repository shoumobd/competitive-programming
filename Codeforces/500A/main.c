#include <stdio.h>

int main()
{
    int n,t,a[100000],i,c=0;
    scanf("%d %d",&n,&t);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;)
    {
        i+=a[i];
        if(i==t)
        {
            c=1;
            break;
        }
        if(i>t)
            break;
    }
    if(c)
        printf("YES");
    else
        printf("NO");
    return 0;
}
