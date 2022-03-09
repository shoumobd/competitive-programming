#include <stdio.h>

int main()
{
    int k,l,m,n,d,i,s=0;
    scanf("%d\n%d\n%d\n%d\n%d",&k,&l,&m,&n,&d);
    if(k==1 || l==1 || m==1 || n==1)
        printf("%d",d);
    else
    {
        for(i=1;i<=d;i++)
        {
            if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
                s+=1;
        }
        printf("%d",s);
    }
    return 0;
}
