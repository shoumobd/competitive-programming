#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,a[101],i,j,x=1,f=0,c=0;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i])
        {
            if(!f)
                f=1;
            else
                x*=(i-c);
            c=i;
        }
    }
    if(f)
        printf("%I64d",x);
    else
        printf("0");
    return 0;
}
