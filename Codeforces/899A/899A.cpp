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
    int n,i,a;
    map <int, int> mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    int c1=min(mp[1],mp[2])+(mp[1]-min(mp[1],mp[2]))/3;
    int c2=min(mp[1]-3*(mp[1]/3),mp[2])+mp[1]/3;
    //cout<<c1<<" "<<c2;
    cout<<max(c1,c2);
    return 0;
}
