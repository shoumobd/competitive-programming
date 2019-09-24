#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i1,j1,i,j,k,n,x;
    while(scanf("%d %d",&i1,&j1)!=EOF)
    {
        x=0;
        if(i1<=j1)
        {
            i=i1;
            j=j1;
        }
        else
        {
            i=j1;
            j=i1;
        }
        for(;i<=j;i++)
        {
            n=i;
            for(k=1;n!=1;k++)
            {
                if(n%2)
                    n=3*n+1;
                else
                    n/=2;
            }
            if(k>=x)
                x=k;
        }
        printf("%d %d %d\n",i1,j1,x);
    }
    return 0;
}
