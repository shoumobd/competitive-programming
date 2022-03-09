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
    LL n,i,a,c=0,s=0;
    vector <LL> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        c+=a;
        v.push_back(a);
    }
    s=c;
    sort(v.begin(),v.end());
    for(i=0;i<n-1;i++)
    {
        s+=c;
        c-=v[i];
    }
    cout<<s;
    return 0;
}
