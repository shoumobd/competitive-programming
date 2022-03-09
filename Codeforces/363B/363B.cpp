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
    int n,k,i,a,c=0,j=0,mnc=0;
    vector <int> v;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        if(i<k) c+=a;
    }
    mnc=c;
    for(i=1;i<=n-k;i++)
    {
        c-=v[i-1];
        c+=v[i+k-1];
        if(c<mnc)
        {
            mnc=c;
            j=i;
        }
    }
    cout<<j+1;
    return 0;
}
