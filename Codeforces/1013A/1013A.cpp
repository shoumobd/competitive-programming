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
    int x,n,n1,c1=0,c2=0;
    cin>>n;
    n1=n;
    while(n1--)
    {
        cin>>x;
        c1+=x;
    }
    n1=n;
    while(n1--)
    {
        cin>>x;
        c2+=x;
    }
    if(c2>c1) cout<<"No"; else cout<<"Yes";
    return 0;
}
