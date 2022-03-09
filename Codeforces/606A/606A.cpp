#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,x,y,z,p=0;
    cin>>a>>b>>c>>x>>y>>z;
    if(a>x) p+=(a-x)/2; else p+=(a-x); //cout<<p<<"\n";
    if(b>y) p+=(b-y)/2; else p+=(b-y); //cout<<p<<"\n";
    if(c>z) p+=(c-z)/2; else p+=(c-z); //cout<<p<<"\n";
    if(p>=0) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
