#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[30];
    int l,i,c,p;
    while(scanf("%s",s)!=EOF)
    {
        c=0;
        p=1;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                c+=(s[i]-'A'+27);
            else if(s[i]>='a' && s[i]<='z')
                c+=(s[i]-'a'+1);
        }
        if(c>2)
        {
            if(!(c%2))
                p=0;
            else
            {
                for(i=3;i<=sqrt(c)+1;i+=2)
                {
                    if(!(c%i))
                    {
                        p=0;
                        break;
                    }
                }
            }
        }
        if(p)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
