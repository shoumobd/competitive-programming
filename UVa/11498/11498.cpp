#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,x,y,n,m;
    while(1)
    {
        cin>>k;
        if(!k) break;
        cin>>n>>m;
        while(k--)
        {
            cin>>x>>y;
            if(x==n || y==m) printf("divisa\n");
            else if(x>n && y>m) printf("NE\n");
            else if(x<n && y>m) printf("NO\n");
            else if(x<n && y<m) printf("SO\n");
            else if(x>n && y<m) printf("SE\n");
        }
    }
    return 0;
}
