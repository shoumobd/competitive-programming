#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,mx=-1;
    map <int, int> mp;
    cin>>n;
    while(n--)
    {
        cin>>a;
        mp[a]++;
        mx=max(mx,mp[a]);
    }
    cout<<mx<<" "<<mp.size();
    return 0;
}
