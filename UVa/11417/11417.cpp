#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(!(a%b))
        return b;
    return gcd(b,a%b);
}

int main()
{
    int n,i,j,G;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        G=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                G+=gcd(i,j);
            }
        }
        printf("%d\n",G);
    }
    return 0;
}
