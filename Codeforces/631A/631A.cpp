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
    int n,s=0,c=0,i,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a; c|=a;
    }
    s+=c; c=0;
    for(i=0;i<n;i++)
    {
        cin>>a; c|=a;
    }
    cout<<s+c;
    return 0;
}
