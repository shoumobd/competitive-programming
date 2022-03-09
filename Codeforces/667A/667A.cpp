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
    double d,h,v,e,r,a,e2;
    cin>>d>>h>>v>>e;
    cout<<setprecision(12);
    r=d/2.0; a=PI*r*r; //cout<<a;
    e2=v/a; //cout<<v/a<<"\n";
    if(e2<=e) cout<<"NO";
    else
    {
        cout<<"YES\n";
        e=e2-e;
        cout<<h/e;
    }
    return 0;
}
