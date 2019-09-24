#include <bits/stdc++.h>

using namespace std;

bool prime[100001];

int a[200];

void sieve(int n)
{
    memset(prime, true, sizeof(prime));
    int i,p;
    for(p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(i=p*2;i<=n;i+=p)
                prime[i]=false;
        }
    }
    prime[0]=false;
    prime[1]=false;
}

int main()
{
    char s[2002];
    sieve(2002);
    int t,l,i,j,f;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        memset(a,0,sizeof(a));
        fflush(stdin);
        f=0;
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            a[s[i]]++;
        }
        printf("Case %d: ",j);
        for(i='0';i<='z';i++)
        {
            if(prime[a[i]])
            {
                printf("%c",i);
                f=1;
            }
        }
        if(!f)
            printf("empty");
        printf("\n");
    }
    return 0;
}
