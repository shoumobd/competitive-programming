#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int a,b,c,dp[4010];

int mx(int n)
{
    if(!n) return 0;
    if(n<0 || dp[n]==-2) return -2;
    //if((n-a<0 || dp[n-a]==-2) && (n-b<0 || dp[n-b]==-2) && (n-c<0 || dp[n-c]==-2))
    if(mx(n-a)==-2 && mx(n-b)==-2 && mx(n-c)==-2)
    {
        if(n-a>0) dp[n-a]=-2;
        if(n-b>0) dp[n-b]=-2;
        if(n-c>0) dp[n-c]=-2;
        //return -2;
        dp[n]=-2;
    }
    if(dp[n]==-1) dp[n]=1+max(mx(n-a),max(mx(n-b),mx(n-c)));
    return dp[n];
    //return 1+max(mx(n-a),max(mx(n-b),mx(n-c)));
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    memset(dp,-1,sizeof(dp));
    //cout<<dp[0]<<"\n";
    cin>>n>>a>>b>>c;
    cout<<mx(n);
    return 0;
}
