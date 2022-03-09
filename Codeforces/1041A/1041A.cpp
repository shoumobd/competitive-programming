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
    int n,i,a,mx=-1,mn=INF;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        mx=max(mx,a);
        mn=min(mn,a);
    }
    cout<<mx-mn+1-n;
    return 0;
}
