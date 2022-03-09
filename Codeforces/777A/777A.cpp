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
    int n,x,i;
    cin>>n>>x;
    n%=6;
    string s="";
    for(i=0;i<3;i++)
    {
        if(i==x) s+='1';
        else s+='0';
    }
    for(i=n;i>=1;i--)
    {
        if(i%2) swap(s[0],s[1]);
        else swap(s[1],s[2]);
    }
    for(i=0;i<3;i++)
    {
        if(s[i]=='1') cout<<i<<"\n";
    }
    return 0;
}
