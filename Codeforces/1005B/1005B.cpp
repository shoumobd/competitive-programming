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
    string s,t; int i,j; cin>>s>>t;
    i=s.size()-1; j=t.size()-1;
    while(i>=0 && j>=0)
    {
        if(s[i]!=t[j]) break;
        i--; j--;
    }
    cout<<i+j+2<<"\n";
    return 0;
}
