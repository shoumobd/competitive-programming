#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while(1)
    {
        scanf("%lld",&n);
        if(n<0)
            break;
        printf("%lld\n",1+n*(n+1)/2);
    }
    return 0;
}
