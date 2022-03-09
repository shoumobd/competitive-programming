#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,a,n,m,mx=-1,mxi=-1;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if((1+(a-1)/m)>=mx)
        {
            mx=1+(a-1)/m;
            mxi=i;
        }
    }
    cout<<mxi;
    return 0;
}
