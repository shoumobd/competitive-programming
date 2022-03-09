#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    map <int, int> mp;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a) mp[a]++;
    }
    cout<<mp.size()<<"\n";
    return 0;
}
