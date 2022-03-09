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
    int n,i,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(i) cout<<" ";
        if(a%2) cout<<a;
        else cout<<a-1;
    }
    return 0;
}
