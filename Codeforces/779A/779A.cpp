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
    int n,i,a,c=0,f=1;
    map <int, int> mp,mp1,mp2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        mp1[a]++;
        mp[a]++;
    }
    for(i=0;i<n;i++)
    {
        cin>>a;
        mp2[a]++;
        mp[a]++;
    }
    for(i=1;i<=5;i++)
    {
        if(mp[i]%2)
        {
            f=0;
            break;
        }
        c+=(abs(mp1[i]-mp[i]/2));
        //cout<<c<<"\n";
    }
    if(c%2) f=0;
    if(f) cout<<c/2;
    else cout<<"-1";
    return 0;
}
