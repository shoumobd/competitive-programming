#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    string s1,s2;
    map <string, string> mp;
    cin>>n>>m;
    while(n--)
    {
        cin>>s1>>s2;
        s2+=";";
        mp[s2]=s1;
    }
    while(m--)
    {
        cin>>s1>>s2;
        cout<<s1<<" "<<s2<<" #"<<mp[s2]<<"\n";
    }
    return 0;
}
