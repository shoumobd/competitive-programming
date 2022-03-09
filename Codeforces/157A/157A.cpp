#include <bits/stdc++.h>

using namespace std;

int n,i,j,a[31][31],c[31],r[31],x=0;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            c[j]+=a[i][j];
            r[i]+=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(c[j]>r[i]) x++;
        }
    }
    cout<<x;
    return 0;
}
