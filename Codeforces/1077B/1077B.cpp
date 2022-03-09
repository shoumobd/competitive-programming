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
    int n,k=0,a,i; vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a; v.push_back(a);
    }
    for(i=1;i<n-1;i++)
    {
        if(v[i-1] && !v[i] && v[i+1]) { v[i+1]=0; k++; }
    } cout<<k;
    return 0;
}
