#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,c=0;
    cin>>n>>m;
    for(i=0;i<=m,i*i<=n;i++)
    {
        if(i+(n-i*i)*(n-i*i)==m)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
