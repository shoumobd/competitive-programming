#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,r,i;
    cin>>k>>r;
    for(i=1;i<11;i++)
    {
        if((k*i)%10==0 || (k*i)%10==r)
            break;
    }
    cout<<i;
    return 0;
}
