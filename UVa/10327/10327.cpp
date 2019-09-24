#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c,i,j,a;
    vector <int> v;
    while(scanf("%d",&n)!=EOF)
    {
        v.clear();
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(v[j]>v[j+1])
                {
                    swap(v[j],v[j+1]);
                    c++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}
