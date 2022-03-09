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
    LL l1,r1,l2,r2,k,c=0;
    cin>>l1>>r1>>l2>>r2>>k;
    l1=max(l1,l2); r1=min(r1,r2);
    c=max((LL)0,r1-l1+1);
    if(k>=l1 && k<=r1) c--;
    cout<<c<<"\n";
    return 0;
}
