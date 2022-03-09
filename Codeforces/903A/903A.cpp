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
    int n,i,x;
    vector <int> v(110);
    fill(v.begin(),v.end(),0);
    v[3]=1; v[6]=1; v[7]=1;
    for(i=8;i<=100;i++)
    {
        if(v[i-3] || v[i-7]) v[i]=1;
    }
    /*for(i=1;i<=100;i++)
    {
        cout<<i<<" "<<v[i]<<"\n";
    }*/
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(v[x]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
