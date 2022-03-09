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
    string s="",s1,f="YES"; int i;
    for(i=0;i<3;i++) {cin>>s1; s+=s1;}
    for(i=0;i<5;i++)
    {
        if(s[i]!=s[8-i]) f="NO";
    }
    cout<<f;
    return 0;
}
