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
    int n,a,b,i,x;
    map <int, int> mp;
    cin>>n>>a>>b;
    while(a--)
    {
        cin>>x;
        mp[x]++;
    }
    while(b--)
        cin>>x;
    for(i=1; i<=n; i++)
    {
        if(i>1)
            cout<<" ";
        if(mp[i])
            cout<<1;
        else
            cout<<2;
    }
    return 0;
}
