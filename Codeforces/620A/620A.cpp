#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x1,x2,y1,y2; cin>>x1>>y1>>x2>>y2; cout<<max(abs(x1-x2),abs(y1-y2))<<"\n";
    return 0;
}
