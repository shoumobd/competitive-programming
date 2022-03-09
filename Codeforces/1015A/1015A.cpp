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
    int n,m,i,l,r;
    vector <int> v(110),a;
    fill(v.begin(),v.end(),0);
    cin>>n>>m;
    while(n--)
    {
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(i=1;i<=m;i++)
    {
        v[i]=v[i-1]+v[i];
        //cout<<v[i]<<" ";
        if(!v[i]) a.push_back(i);
    }
    cout<<a.size()<<"\n";
    for(i=0;i<a.size();i++)
    {
        if(i) cout<<" "; cout<<a[i];
    }
    return 0;
}
