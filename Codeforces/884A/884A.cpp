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
    int n,t,f=0,d=0,c=0,a;
    cin>>n>>t;
    while(n--)
    {
        cin>>a;
        d++;
        c+=(86400-a);
        if(c>=t && !f) f=d;
        //cout<<a<<" "<<f<<" "<<c<<" "<<d<<"\n";
    }
    cout<<f<<"\n";
    return 0;
}
