#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a,x=0,y=0;
    map <int, int> mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(!i) x=a;
        else if(x!=a) y=a;
        mp[a]++;
    }
    if(mp[x]==mp[y] && mp[x]+mp[y]==n) cout<<"YES\n"<<x<<" "<<y;
    else cout<<"NO";
    return 0;
}
