#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m) swap(n,m);
    if(m-n<n)
    {
        while(m-n<n)
        {
            m++;
            n--;
        }
    }
    cout<<n;
    return 0;
}
