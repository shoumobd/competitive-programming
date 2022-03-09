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
    int n,k,i,a;
    vector <int> v;
    map <int, int> mp;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(!mp[a])
        {
            mp[a]=1;
            v.push_back(i);
        }
    }
    if(v.size()<k) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(i=0;i<k;i++)
        {
            if(i) cout<<" ";
            cout<<v[i];
        }
        cout<<"\n";
    }
    return 0;
}
