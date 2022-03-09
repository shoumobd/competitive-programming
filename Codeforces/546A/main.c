#include <stdio.h>

int main()
{
    int k,w,i;
    long long n,s=0;
    scanf("%d %I64d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
        s=s+i*k;
    if(s<n)
        s=n;
    printf("%I64d",s-n);
    return 0;
}
