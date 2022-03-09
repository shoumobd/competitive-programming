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
    int i,x=0,y=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='L') x--;
        if(s[i]=='R') x++;
        if(s[i]=='U') y++;
        if(s[i]=='D') y--;
    }
    x=abs(x); y=abs(y);
    if((x%2)^(y%2)) cout<<"-1\n";
    else cout<<x/2+y/2+x%2<<"\n";
    return 0;
}
