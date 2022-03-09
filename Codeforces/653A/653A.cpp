#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,i; string f="NO";
    vector <int> v; map <int, bool> mp;
    cin>>n;
    while(n--)
    {
        cin>>t; if(!mp[t]){ mp[t]=1; v.push_back(t); }
    }
    sort(v.begin(),v.end());
    for(i=2;i<v.size();i++)
    {
        if(v[i]-v[i-2]<=2) f="YES";
    }
    cout<<f;
    return 0;
}
