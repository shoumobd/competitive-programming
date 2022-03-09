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
    int k,i,j;
    string s,f="YES";
    map <int, int> mp;
    cin>>k;
    for(i=0; i<4; i++)
    {
        cin>>s;
        for(j=0; j<4; j++)
        {
            if(s[j]>'0')
                mp[s[j]-'0']++;
        }
    }
    for(i=1; i<=9; i++)
    {
        //cout<<mp[i]<<"\n";
        if(mp[i]>k*2)
            f="NO";
    }
    cout<<f;
    return 0;
}
