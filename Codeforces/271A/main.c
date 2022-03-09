#include <stdio.h>

int main()
{
    int y,a[11]={},c,i,j,k,x;
    scanf("%d",&y);
    for(i=y+1;;i++)
    {
        c=0;
        j=i;
        while(j)
        {
            x=j%10;
            a[x]++;
            j/=10;
        }
        for(k=0;k<10;k++)
        {
            if(a[k]>1)
            {
                c=1;
            }
            a[k]=0;
        }
        if(!c)
        break;
    }
    printf("%d",i);
    return 0;
}
