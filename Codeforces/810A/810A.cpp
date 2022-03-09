#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)
#define inf INT_MAX

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,xi,cn=0,ti;
    double n,i,a,x,c=0,t;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        c+=a;
    }
    x=c/n;
    xi=round(x);
    ti=xi;
    while(ti<k)
    {
        cn++;
        n++;
        c+=k;
        t=c/n;
        ti=round(t);
    }
    cout<<cn;
    return 0;
}
