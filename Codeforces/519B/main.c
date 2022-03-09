#include <stdio.h>

int main()
{
    int n,a,i,j,s[3]={};
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            s[i]+=a;
        }
        n--;
    }
    printf("%d\n%d",s[0]-s[1],s[1]-s[2]);
    return 0;
}
