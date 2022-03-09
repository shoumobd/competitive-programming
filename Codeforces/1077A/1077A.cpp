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
    LL t,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        cout<<(a-b)*(k/2)+(k%2)*a<<"\n";
    }
    return 0;
}
