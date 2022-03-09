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
    int a,b;
    cin>>a>>b;
    if(a<b) swap(a,b);
    if((a-b)%2) cout<<((a-b)/2+1)*((a-b)/2+1);
    else cout<<((a-b)/2)*((a-b)/2+1);
    return 0;
}
