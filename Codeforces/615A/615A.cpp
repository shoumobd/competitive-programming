#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,x,a;
    cin>>n>>m;
    vector <int> v(m+1);
    while(n--)
    {
        cin>>x;
        while(x--)
        {
            cin>>a;
            v[a-1]=1;
        }
    }
    a=accumulate(v.begin(),v.end(),0); //cout<<a<<"\n";
    if(a>=m) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
