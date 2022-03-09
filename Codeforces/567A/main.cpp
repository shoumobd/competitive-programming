#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x[100001],i,mx,mn;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        mx=0;
        mn=10000000000;
        if(i)
        {
            if(x[i]-x[i-1]<mn)
                mn=x[i]-x[i-1];
        }
        if(i<n-1)
        {
            if(x[i+1]-x[i]<mn)
                mn=x[i+1]-x[i];
        }
        if(x[i]-x[0]>mx)
            mx=x[i]-x[0];
        if(x[n-1]-x[i]>mx)
            mx=x[n-1]-x[i];
        printf("%I64d %I64d\n",mn,mx);
    }
    return 0;
}
