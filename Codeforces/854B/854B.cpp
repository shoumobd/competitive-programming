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
    int n,k,mn,mx;
    cin>>n>>k;
    if(!k || !(n-k)) mn=0; else mn=1;
    mx=min(2*k,n-k);
    cout<<mn<<" "<<mx;
    return 0;
}
