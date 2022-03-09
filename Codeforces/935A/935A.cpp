#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c=0;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(!((n-i)%i))
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
