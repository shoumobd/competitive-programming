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
    string s,s1=""; int i=0,c=0,n; cin>>n>>s;
    while(i<n)
    {
        s1+=s[i]; c++; i+=c;
    }
    cout<<s1;
    return 0;
}
