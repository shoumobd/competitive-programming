#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(abs(a-b)>1 || (!a && !b))
        printf("NO");
    else
        printf("YES");
    return 0;
}
