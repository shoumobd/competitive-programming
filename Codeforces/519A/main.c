#include <stdio.h>

int main()
{
    char s[10][10];
    int i,j,w=0,b=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            scanf(" %c",&s[i][j]);
            if(s[i][j]=='Q')
                w+=9;
            else if(s[i][j]=='R')
                w+=5;
            else if(s[i][j]=='B')
                w+=3;
            else if(s[i][j]=='N')
                w+=3;
            else if(s[i][j]=='P')
                w+=1;
            else if(s[i][j]=='q')
                b+=9;
            else if(s[i][j]=='r')
                b+=5;
            else if(s[i][j]=='b')
                b+=3;
            else if(s[i][j]=='n')
                b+=3;
            else if(s[i][j]=='p')
                b+=1;
        }
    }
    if(w>b)
        printf("White");
    else if(b>w)
        printf("Black");
    else
        printf("Draw");
    return 0;
}
