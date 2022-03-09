#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;s[i];i++)
    {
        if(!i && s[i]=='9');
        else if(s[i]>'4')
        {
            s[i]='9'-s[i]+'0';
        }
    }
    puts(s);
    return 0;
}
