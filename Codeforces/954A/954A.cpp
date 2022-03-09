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
    int n,i,c=0;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        c++;
        if(i==n-1 || s[i]!=s[i+1]) i++;
    }
    cout<<c;
    return 0;
}
