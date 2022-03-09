#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

string l2s(LL n)
{
    ostringstream ss; ss<<n;
    return ss.str();
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; LL c=0,a,i;
    cin>>s;
    while(1)
    {
        if(s.size()<2) break;
        a=0;
        for(i=0;i<s.size();i++)
        {
            a+=(s[i]-'0');
        }
        s=l2s(a);
        //cout<<c<<" "<<a<<" "<<s<<"\n";
        c++;
    }
    cout<<c<<"\n";
    return 0;
}
