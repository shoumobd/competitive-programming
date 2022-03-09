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
    string s;
    int n,i,j,f=1;
    vector <string> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s; v.push_back(s);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(v[i].find(v[j])!=string::npos) swap(v[i],v[j]);
            else if(v[j].find(v[i])==string::npos) f=0;
        }
    }
    if(!f) cout<<"NO\n";
    else
    {
        cout<<"YES\n"; for(i=0;i<n;i++) cout<<v[i]<<"\n";
    }
    return 0;
}
