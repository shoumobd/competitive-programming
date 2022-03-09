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
    LL a,i,n;
    vector <LL> v;
    cin>>n;
    for(i=0;i<n;i++){ cin>>a; v.push_back(a); }
    LL c=abs(v[0]);
    for(i=1;i<n;i++)
    {
        c+=(abs(v[i]-v[i-1]));
    }
    cout<<c;
    return 0;
}
