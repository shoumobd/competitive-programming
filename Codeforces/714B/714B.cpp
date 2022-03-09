#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,n,i;
    map <int, int> mp;
    map <int, int> :: iterator it;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a; mp[a]=1;
    }
    if(mp.size()==3)
    {
        it=mp.begin();
        int x=it->first;
        it++;
        int y=it->first;
        it++;
        int z=it->first;
        //cout<<x<<" "<<y<<" "<<z<<"\n";
        if(z-y==y-x) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if(mp.size()<3) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
