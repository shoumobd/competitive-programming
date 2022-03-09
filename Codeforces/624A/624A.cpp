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
    double d,l,v1,v2;
    cin>>d>>l>>v1>>v2;
    cout<<fixed<<setprecision(20)<<max((l-d)/(v1+v2),0.0);
    return 0;
}
