#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,j=0,a[10],i,h,m;
    scanf("%d",&n);
    while(n--)
    {
        j++;
        for(i=0;i<4;i++)
        {
            scanf("%d:%d",&h,&m);
            a[i]=h*100+m;
        }
        if((a[2]>=a[0] && a[2]<=a[1]) || (a[3]>=a[0] && a[3]<=a[1]) || (a[2]<=a[0] && a[3]>=a[1]))
            printf("Case %d: Mrs Meeting\n",j);
        else
            printf("Case %d: Hits Meeting\n",j);
    }
    return 0;
}
