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
    int n,m,k,s=0,c=0,x,i,j;
    vector <int> v;
    cin>>n>>m>>k;
    for(i=0;i<=m;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<m;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(((v[i]>>j) & 1)!=((v[m]>>j) & 1)) c++;
        }
        //cout<<i<<" "<<c<<"\n";
        if(c<=k) s++;
    }
    cout<<s;
    return 0;
}
