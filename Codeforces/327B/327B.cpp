#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)
#define N 1300001

bool prime[N+1];

void sieve(int n)
{
    memset(prime,true,sizeof(prime));
    for(int p=2; p*p<=n; p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*2; i<=n; i+=p)
                prime[i]=false;
        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c=0,i;
    cin>>n;
    sieve(N);
    for(i=2; i<=N; i++)
    {
        if(prime[i])
        {
            if(c)
                cout<<" ";
            cout<<i;
            c++;
            if(c==n)
                break;
        }
    }
    //cout<<"\n"<<c;
    return 0;
}
