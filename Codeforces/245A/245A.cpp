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
    int n,t,x,y,a1=0,a2=0,b1=0,b2=0;
    cin>>n;
    while(n--)
    {
        cin>>t>>x>>y;
        if(t==1) { a1+=x; a2+=y; }
        else { b1+=x; b2+=y; }
    }
    if(a1>=a2) cout<<"LIVE\n"; else cout<<"DEAD\n";
    if(b1>=b2) cout<<"LIVE\n"; else cout<<"DEAD\n";
    return 0;
}
