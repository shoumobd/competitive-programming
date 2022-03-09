#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,i;
    cin>>n>>k;
    vector <int> v(n+1);
    iota(v.begin(),v.end(),0);
    reverse(v.end()-k-1,v.end());
    for(i=1;i<=n;i++)
    {
        if(i>1) cout<<" ";
        cout<<v[i];
    }
    return 0;
}
