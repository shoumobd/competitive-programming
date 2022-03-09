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
    int a,b,c,n,x;
    cin>>a>>b>>c>>n;
    x=n-a-b+c;
    if(min(a,b)<c) x=-1;
    if(max(max(a,b),c)>n) x=-1;
    if(x<1) x=-1;
    cout<<x<<"\n";
    return 0;
}
