#include <stdio.h>

int main()
{
    int n,i,j,k,c;
    char s[1000][40];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%s",s[i]);
        for(j=0;j<i;j++)
        {
            if(!(strcmp(s[i],s[j])))
            {
                //algo extremely wrong
                for(k=0;s[i][k];k++);
                if('a'<=s[i][k-1] && s[i][k-1]<='z')
                    s[i][k]='1';
                else if(s[i][k-1]=='9')
                {
                    s[i][k-1]='1';
                    s[i][k]='0';
                }
                else
                {
                    s[i][k-1]++;
                }
                c=1;
            }
        }
        if(c)
            printf("%s\n",s[i]);
        else
            printf("OK\n");
    }
    return 0;
}
