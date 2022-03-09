#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    x=max(3*a/10,a-(c*a/250));
    y=max(3*b/10,b-(d*b/250));
    if(x>y) cout<<"Misha\n";
    else if(x<y) cout<<"Vasya\n";
    else cout<<"Tie\n";
    return 0;
}
