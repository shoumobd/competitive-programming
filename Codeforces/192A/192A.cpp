#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,l,h,m,f;
    scanf("%I64d",&n);
    for(i=1;i*i<=2*n;i++)
    {
        f=0;
        l=1;
        h=n;
        while(l<=h)
        {
            m=(l+h)/2;
            if((i*(i+1)/2)+(m*(m+1)/2)==n)
            {
                f=1;
                break;
            }
            else if((i*(i+1)/2)+(m*(m+1)/2)<n)
            {
                l=m+1;
            }
            else if((i*(i+1)/2)+(m*(m+1)/2)>n)
            {
                h=m-1;
            }
        }
        if(f)
            break;
    }
    if(f)
        printf("YES");
    else
        printf("NO");
    return 0;
}
