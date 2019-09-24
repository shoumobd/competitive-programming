#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,h,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d:%d",&h,&m);
        if(h==12 && m==0)
            printf("12:00\n");
        else if(m==0)
            printf("%02d:00\n",12-h);
        else if(h==11)
            printf("12:%02d\n",60-m);
        else if(h==12)
            printf("11:%02d\n",60-m);
        else
            printf("%02d:%02d\n",12-h-1,60-m);
    }
    return 0;
}
