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
    int s,v1,v2,t1,t2,c1,c2;
    cin>>s>>v1>>v2>>t1>>t2;
    c1=s*v1+2*t1;
    c2=s*v2+2*t2;
    //cout<<c1<<" "<<c2<<"\n";
    if(c1<c2) cout<<"First";
    else if(c1>c2) cout<<"Second";
    else cout<<"Friendship";
    return 0;
}
