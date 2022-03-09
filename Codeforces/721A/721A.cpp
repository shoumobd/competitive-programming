#include <bits/stdc++.h>

using namespace std;

int a[100];

int main()
{
    int n,i,j,c=0;
    char s[101];
    scanf("%d %s",&n,s);
    for(i=0,j=0;i<n;i++)
    {
        if(s[i]=='B')
            c++;
        if(s[i]=='W' || i==n-1)
        {
            if(c)
            {
                a[j]=c;
                j++;
            }
            c=0;
        }
    }
    printf("%d\n",j);
    for(i=0;i<j;i++)
        printf("%d ",a[i]);
    return 0;
}
