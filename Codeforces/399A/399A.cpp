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
    int n,p,k,i;
    cin>>n>>p>>k;
    if(p-k>1) cout<<"<<";
    for(i=max(1,p-k);i<=(min(p+k,n));i++)
    {
        if(i>1) cout<<" ";
        if(i==p) cout<<"("<<i<<")";
        else cout<<i;
    }
    if(p+k<n) cout<<" >>";
    return 0;
}
