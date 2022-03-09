#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,a[1001],s=0,i;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    s=abs(s);
    if(s%x)
        printf("%d",s/x+1);
    else
        printf("%d",s/x);
    return 0;
}
