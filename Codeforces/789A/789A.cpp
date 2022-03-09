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
    LL n,k,w,c=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>w;
        c+=(1+(w-1)/k);
    }
    cout<<1+(c-1)/2;
    return 0;
}
