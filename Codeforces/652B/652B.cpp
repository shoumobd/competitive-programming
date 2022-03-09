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
    int n,a,i,lo,hi; vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a; v.push_back(a);
    }
    sort(v.begin(),v.end());
    lo=0; hi=n-1;
    while(lo<=hi)
    {
        if(lo) cout<<" ";
        cout<<v[lo];
        if(lo<hi) cout<<" "<<v[hi];
        lo++; hi--;
    }
    return 0;
}
