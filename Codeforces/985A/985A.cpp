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

LL n,i,a,c1,c2,x;
vector <LL> v;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(i=0;i<n/2;i++)
    {
        cin>>a; v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n/2;i++)
    {
        x=v[i]-2*(i+1)+1;
        x=abs(x);
        c1+=x;
        x=v[i]-2*(i+1);
        x=abs(x);
        c2+=x;
    }
    //cout<<c1<<" "<<c2;
    cout<<min(c1,c2);
    return 0;
}
