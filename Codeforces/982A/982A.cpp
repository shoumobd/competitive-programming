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
    int n,i,a,f=1;
    string s;
    cin>>n>>s;
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1] && s[i]=='1')
            f=0;
        if(i<n-2 && s[i]==s[i+1] && s[i+1]==s[i+2] && s[i]=='0')
            f=0;
    }
    if(n>1)
    {
        if(s[0]==s[1]) f=0; if(s[n-1]==s[n-2]) f=0;
    }
    if(n==1 && s[0]=='0') f=0;
    if(f) cout<<"Yes\n"; else cout<<"No\n";
    return 0;
}
