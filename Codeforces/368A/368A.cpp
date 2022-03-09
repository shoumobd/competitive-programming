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
    int n,d,a,i,m,c=0; vector <int> v;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a); c+=a;
    }
    cin>>m;
    if(m>=n)
    {
        cout<<c-(m-n)*d;
    }
    else
    {
        sort(v.begin(),v.end());
        for(i=0,c=0;i<m;i++)
        {
            c+=v[i];
        }
        cout<<c;
    }
    return 0;
}
