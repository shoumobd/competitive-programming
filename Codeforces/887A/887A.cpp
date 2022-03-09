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
    string s; int i,c=0,f=0;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(f && s[i]=='0') c++;
        if(s[i]=='1') f=1;
    }
    if(c<6) cout<<"no"; else cout<<"yes";
    return 0;
}
