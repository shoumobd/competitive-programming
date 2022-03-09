#include <stdio.h>

int main()
{
    int n,a[100001],i,b[4]={0,0,0,0},x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]-1]++;
    }
    if(b[0]<=b[2])
        x=b[3]+b[2]+b[1]/2+b[1]%2;
    else
    {
        b[0]-=b[2];
        x=b[3]+b[2]+b[1]/2+b[1]%2+(b[0]-(b[1]%2)*2)/4;
        if((b[0]-(b[1]%2)*2)%4 && (b[0]-(b[1]%2)*2)>0)
        x++;
    }
    printf("%d",x);
    return 0;
}
