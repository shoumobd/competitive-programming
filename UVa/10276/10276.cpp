#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,j,f;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        memset(a,0,sizeof(a));
        for(i=1;;i++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
                if((int)sqrt(a[j]+i)*(int)sqrt(a[j]+i)==(a[j]+i) || !a[j])
                {
                    a[j]=i;
                    f=1;
                    break;
                }
            }
            if(!f)
                break;
        }
        printf("%d\n",i-1);
    }
    return 0;
}
