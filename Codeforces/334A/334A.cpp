#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,n1,i,j=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        n1=n/2;
        while(n1--)
        {
            cout<<j<<" "<<n*n-j+1; j++;
            if(!n1) cout<<"\n"; else cout<<" ";
        }
    }
    return 0;
}
