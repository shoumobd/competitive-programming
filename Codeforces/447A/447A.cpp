#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,p,n,i,f=-1;
    map <int, int> mp;
    cin>>p>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        mp[x%p]++;
        if(mp[x%p]>1 && f==-1) f=i;
    }
    cout<<f;
    return 0;
}
