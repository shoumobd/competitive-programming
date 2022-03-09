#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,c=0;
    bool a,b;
    cin>>n>>m;
    while(n--)
    {
        for(i=1; i<=m; i++)
        {
            cin>>a>>b;
            if(a || b)
                c++;
        }
    }
    cout<<c;
    return 0;
}
