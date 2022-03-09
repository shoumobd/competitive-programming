#include <stdio.h>

int main()
{
    int n,x[100],y[100],z[100],i,a=0,b=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
        a+=x[i];
        b+=y[i];
        c+=z[i];
    }
    if(a==0 && b==0 && c==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
