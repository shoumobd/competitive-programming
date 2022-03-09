#include <bits/stdc++.h>

using namespace std;

int prime(int n)
{
    int p;
    if(n==2)
        return 1;
    for(p=2;p*p<=n;p++)
    {
        if(!(n%p))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
        printf("1");
    else if(!(n%2) || (n%2 && prime(n-2)))
        printf("2");
    else
        printf("3");
    return 0;
}
