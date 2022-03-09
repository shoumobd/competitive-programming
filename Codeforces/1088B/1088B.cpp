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
    LL n,k,i,c=0,a,ki=0; vector <LL> v;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a; v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(ki==k) break;
        v[i]-=c;
        if(v[i]>0)
        {
            c+=v[i]; ki++; cout<<v[i]<<"\n";
        }
    }
    while(ki<k){ cout<<0<<"\n"; ki++; }
    return 0;
}
