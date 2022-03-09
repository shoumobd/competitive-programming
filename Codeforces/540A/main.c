#include <stdio.h>

int main()
{
    int n,i,j,k,a[4],c=0;
    char so[1001],sf[1001];
    scanf("%d %s %s",&n,so,sf);
    for(i=0;i<n;i++)
    {
        a[0]=abs(so[i]-sf[i]);
        a[1]=abs(-10-sf[i]+so[i]);
        a[2]=abs(-10+sf[i]-so[i]);
        for(j=0;j<2;j++)
        {
            for(k=j+1;k<3;k++)
            {
                if(a[j]>a[k])
                {
                    a[j]^=a[k];
                    a[k]^=a[j];
                    a[j]^=a[k];
                }
            }
        }
        c+=a[0];
    }
    printf("%d",c);
    return 0;
}
