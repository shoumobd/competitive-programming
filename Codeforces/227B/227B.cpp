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
    LL n,m,a,i,c1=0,c2=0;
    vector <LL> v; v.push_back(0);
    map <LL, LL> mp1,mp2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        if(!mp1[v[i]]) mp1[v[i]]=i;
        if(!mp2[v[i]]) mp2[v[i]]=n-i+1;
    }
    cin>>m;
    while(m--)
    {
        cin>>a;
        c1+=mp1[a];
        c2+=mp2[a];
    }
    cout<<c1<<" "<<c2;
    return 0;
}
