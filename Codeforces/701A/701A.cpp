#include <bits/stdc++.h>

using namespace std;

int a[101],b[101];

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    sort(b,b+n);
    for(j=0,k=n-1;j<n/2;j++,k--)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",i+1);
                a[i]=0;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==b[k])
            {
                printf("%d\n",i+1);
                a[i]=0;
                break;
            }
        }
    }
    return 0;
}
