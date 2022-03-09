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
    int n,i; string s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%4) s+=('a'-1+(i%4));
        else s+='d';
    }
    cout<<s;
    return 0;
}
