#include <stdio.h>

int main()
{
    int n,i,s;
    scanf("%d",&n);
    s=n;
    if(n==1)
        s--;
    for(i=2;i<n;i++)
    {
        s+=(n+1-i)*i-i+1;
    }
    printf("%d",s+1);
    return 0;
}
