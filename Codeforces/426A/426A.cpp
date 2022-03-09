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
    int n,s,a;
    vector <int> v;
    cin>>n>>s;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int c=accumulate(v.begin(),v.end()-1,0);
    //cout<<c<<"\n";
    if(c<=s) cout<<"YES";
    else cout<<"NO";
    return 0;
}
