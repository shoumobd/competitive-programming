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
    int x,n=3; vector <int> v;
    while(n--){ cin>>x; v.push_back(x); }
    sort(v.begin(),v.end());
    cout<<max(0,v[2]+1-v[1]-v[0]);
    return 0;
}
