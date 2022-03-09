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
    int k,i,c=0,f=0; string s;
    cin>>k>>s;
    for(i=0;i<s.size();i++)
    {
        c+=(s[i]-'0');
    }
    //cout<<c;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {
        if(c>=k) break;
        c+=(9-s[i]+'0');
    }
    cout<<i;
    return 0;
}
