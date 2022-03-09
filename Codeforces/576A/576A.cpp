#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

bool prime[1010];

void sieve(int n)
{
    memset(prime, true, sizeof(prime));
    int i,p;
    for(p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(i=p*p;i<=n;i+=p)
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
    int n,i,j,x;
    vector <int> v;
    cin>>n;
    sieve(n+1);
    for(i=2;i<=n;i++)
    {
        if(prime[i])
        {
            x=i;
            while(1)
            {
                if(x>n) break;
                v.push_back(x);
                x*=i;
            }
        }
    }
    cout<<v.size()<<"\n";
    for(i=0;i<v.size();i++)
    {
        if(i) cout<<" ";
        cout<<v[i];
    }
    return 0;
}
