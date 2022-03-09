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
    int n,i,a,c=0;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a; v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=1;i<n;i+=2)
    {
        c+=(v[i]-v[i-1]);
    }
    cout<<c;
    return 0;
}
