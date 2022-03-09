#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int a[101][101];

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,c=0,x1,y1,x2,y2;
    cin>>n;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2;
        for(i=x1;i<=x2;i++)
        {
            for(j=y1;j<=y2;j++)
            {
                a[i][j]++;
            }
        }
    }
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=100;j++)
        {
            c+=a[i][j];
        }
    }
    cout<<c;
    return 0;
}
