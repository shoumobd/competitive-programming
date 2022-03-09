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
    int i;
    string s,s1;
    map <string, int> mp;
    cin>>s;
    for(i=0;i<10;i++)
    {
        cin>>s1;
        mp[s1]=i;
    }
    for(i=0;i<8;i++)
    {
        s1=s.substr(i*10,10);
        //cout<<s1<<"\n";
        cout<<mp[s1];
    }
    return 0;
}
