#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m1,mn1,mn2,mn3,mx1,mx2,mx3,a,b,c;
    cin>>n>>mn1>>mx1>>mn2>>mx2>>mn3>>mx3;
    a=min(mx1,n-(mn2+mn3));
    b=min(mx2,n-(a+mn3));
    c=min(mx3,n-(a+b));
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
