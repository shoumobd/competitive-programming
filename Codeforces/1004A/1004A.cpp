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
    LL n,i,x,d;
    cin>>n>>d;
    vector <LL> v;
    set <LL> a;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        if(!i || v[i-1]+d<=v[i]-d) a.insert(v[i]-d);
        if(i==n-1 || v[i+1]-d>=v[i]+d) a.insert(v[i]+d);
    }
    cout<<a.size();
    return 0;
}
