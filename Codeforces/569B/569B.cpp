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
    int n,i,j=0,a; vector <int> v; map <int, int> mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>n || mp[a]) v.push_back(0);
        else{ v.push_back(a); mp[a]++; }
    }
    for(i=0;i<n;i++)
    {
        if(i) cout<<" ";
        if(v[i]) cout<<v[i];
        else
        {
            while(++j){if(!mp[j]){cout<<j; break;}}
        }
    }
    return 0;
}
