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
    int n,i,a,c=0;
    map <int, int> mp;
    map <int, int> :: iterator it;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        c=max(c,(it->second));
    }
    cout<<c<<"\n";
    return 0;
}
