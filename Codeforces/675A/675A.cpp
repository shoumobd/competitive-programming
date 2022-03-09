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
    LL a,b,c;
    cin>>a>>b>>c;
    if(!c)
    {
        if(!(b-a)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else
    {
        if((a>b && c>0) || (a<b && c<0)) cout<<"NO\n";
        else if(!((b-a)%c)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
