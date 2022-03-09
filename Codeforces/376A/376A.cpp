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
    LL i,c1=0,c2=0,x;
    string s; cin>>s; x=s.find("^");
    for(i=x+1;i<s.size();i++) if(s[i]>='0' && s[i]<='9') c1+=((i-x)*(s[i]-'0'));
    for(i=x-1;i>=0;i--) if(s[i]>='0' && s[i]<='9') c2+=((x-i)*(s[i]-'0'));
    //cout<<c1<<" "<<c2<<"\n";
    if(c1==c2) cout<<"balance";
    if(c1>c2) cout<<"right";
    if(c1<c2) cout<<"left";
    return 0;
}
