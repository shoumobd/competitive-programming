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
    int a,n,m,c1=0,c2=0,l,r,mn;
    cin>>n>>m;
    while(n--)
    {
        cin>>a; if(a>0) c1++; else c2++;
    }
    mn=min(c1,c2);
    while(m--)
    {
        cin>>l>>r;
        if((r-l)%2 && 2*mn>=(r-l+1)) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}
