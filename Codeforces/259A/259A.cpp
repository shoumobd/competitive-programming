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
    string s,f="YES"; int i,n=8;
    while(n--)
    {
        cin>>s;
        for(i=1;i<8;i++)
        {
            if(s[i]==s[i-1]) f="NO";
        }
    }
    cout<<f;
    return 0;
}
