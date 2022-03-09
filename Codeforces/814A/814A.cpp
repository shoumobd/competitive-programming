#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,i,x,f;
    vector <int> a,b;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
        if(!x) f=i;
    }
    for(i=0;i<k;i++)
    {
        cin>>x;
        b.push_back(x);
    }
    if(k>1) cout<<"Yes\n";
    else
    {
        a[f]=b[0];
        if(is_sorted(a.begin(),a.end())) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}
