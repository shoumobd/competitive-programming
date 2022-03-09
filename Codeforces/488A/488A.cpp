#include <bits/stdc++.h>

using namespace std;

int lucky(int n)
{
    if(n<0) n*=-1;
    while(n)
    {
        if(n%10==8) return 1;
        n/=10;
    }
    return 0;
}

int main()
{
    int a,c=1;
    cin>>a;
    while(!(lucky(a+c)))
    {
        c++;
    }
    cout<<c;
    return 0;
}
