#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1,b1,a2,b2,a3,b3,f=0;
    scanf("%d %d %d %d %d %d",&a1,&b1,&a2,&b2,&a3,&b3);
    if(a2+a3<=a1 && b2<=b1 && b3<=b1)
        f=1;
    else if(a2+b3<=a1 && b2<=b1 && a3<=b1)
        f=1;
    else if(b2+a3<=a1 && a2<=b1 && b3<=b1)
        f=1;
    else if(b2+b3<=a1 && a2<=b1 && a3<=b1)
        f=1;
    else if(a2+a3<=b1 && b2<=a1 && b3<=a1)
        f=1;
    else if(a2+b3<=b1 && b2<=a1 && a3<=a1)
        f=1;
    else if(b2+a3<=b1 && a2<=a1 && b3<=a1)
        f=1;
    else if(b2+b3<=b1 && a2<=a1 && a3<=a1)
        f=1;
    if(f)
        printf("YES");
    else
        printf("NO");
    return 0;
}
