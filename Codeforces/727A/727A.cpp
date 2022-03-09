#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007
LL c=0;

LL x(LL a,LL b)
{
    c++;
    if(b==a) { cout<<"YES\n"<<c<<"\n"; return 1; }
    else if(b<a) { return 0; }
    else if(!(b%2))
    {
        b/=2;
        if(x(a,b)) { cout<<b<<" "; return 1;}
        else return 0;
    }
    else if(!((b-1)%10))
    {
        b--; b/=10;
        if(x(a,b)) { cout<<b<<" "; return 1; }
        else return 0;
    }
    else { return 0; }
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL a,b;
    cin>>a>>b;
    if(x(a,b)) cout<<b;
    else cout<<"NO";
    return 0;
}
