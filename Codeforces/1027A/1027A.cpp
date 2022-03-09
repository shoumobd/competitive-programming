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
    int t,n,i,d;
    string s,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        f="YES\n";
        for(i=0;i<n/2;i++)
        {
            d=abs(s[i]-s[n-i-1]);
            //cout<<"i="<<i<<", si="<<s[i]<<", sn="<<s[n-i-1]<<", d="<<d<<"\n";
            if(!(!d || d==2)){ f="NO\n"; break;}
        }
        cout<<f;
    }
    return 0;
}
