#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[5],i,j;
    scanf("%d",&n);
    while(n--)
    {
        for(i=0;i<4;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<3;i++)
        {
            for(j=i+1;j<4;j++)
            {
                if(a[i]>a[j])
                {
                    a[i]^=a[j];
                    a[j]^=a[i];
                    a[i]^=a[j];
                }
            }
        }
        if(a[0]+a[1]+a[2]<=a[3])
            printf("banana\n");
        else if(a[0]==a[1] && a[0]==a[2] && a[0]==a[3])
            printf("square\n");
        else if(a[0]==a[1] && a[2]==a[3])
            printf("rectangle\n");
        else
            printf("quadrangle\n");
    }
    return 0;
}
