#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF LLONG_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL n,t,i,a,x,lo,hi,md,f,mx=-1;
    vector <LL> v,s;
    v.push_back(0);
    s.push_back(0);
    cin>>n>>t;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(a);
        s.push_back(s[i-1]+a);
    }
    s.push_back(INF);
    for(i=1;i<=n;i++)
    {
        //x=s[n]-s[i-1];
        //cout<<i<<" "<<x<<"\n";
        lo=i;
        hi=n;
        f=0;
        while(lo<=hi)
        {
            md=(lo+hi)/2;
            if(s[md]-s[i-1]<=t && s[md+1]-s[i-1]<=t)
            {
                lo=md+1;
            }
            else if(s[md]-s[i-1]<=t)
            {
                f=1;
                break;
            }
            else
            {
                hi=md-1;
            }
        }
        if(f) x=md-i+1;
        else x=0;
        mx=max(x,mx);
        //cout<<i<<" "<<md<<" "<<x<<" "<<mx<<"\n";
    }
    cout<<mx;
    return 0;
}
