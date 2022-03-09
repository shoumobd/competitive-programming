#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,c1=0,c2=0; cin>>n;
    while(n--)
    {
        cin>>x>>y; if(x>0) c1++; else c2++;
    }
    if(min(c1,c2)<=1) cout<<"Yes\n"; else cout<<"No\n";
    return 0;
}
