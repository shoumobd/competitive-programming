#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,i,c=0; map <int, int> mp;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        mp[a]++;
        mp[b]++;
    }
    for(i=1;i<=n;i++)
    {
        if(mp[i]>1) c++;
    }
    cout<<n-c;
    return 0;
}
