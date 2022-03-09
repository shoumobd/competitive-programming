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
    int n,k,i,a,c=0;
    vector <int> v;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        if(!i) continue;
        if(v[i]+v[i-1]<k)
        {
            c+=(k-(v[i]+v[i-1]));
            v[i]+=(k-(v[i]+v[i-1]));
        }
    }
    cout<<c<<"\n";
    for(i=0;i<n;i++)
    {
        if(i) cout<<" ";
        cout<<v[i];
    }
    return 0;
}
