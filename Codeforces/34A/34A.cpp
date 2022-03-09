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
    LL n,mn=INF,i,a,x,y; vector <LL> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a; v.push_back(a);
    }
    for(i=0;i<n;i++)
    {
        if(!i) a=abs(v[i]-v[n-1]);
        else a=abs(v[i]-v[i-1]);
        //cout<<i<<" "<<mn<<" "<<a<<"\n";
        if(a<mn)
        {
            mn=a; y=i+1; x=(!i?n:i);
        }
    }
    cout<<x<<" "<<y;
    return 0;
}
