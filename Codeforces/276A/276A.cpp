#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,f,t,j,mx=-100000000000;
    cin>>n>>k;
    while(n--)
    {
        cin>>f>>t;
        j=f-max(t-k,(ll)0);
        mx=max(mx,j);
    }
    cout<<mx<<"\n";
    return 0;
}
