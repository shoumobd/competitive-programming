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
    string s; LL k,a,mx=-1,i,f=0; vector <LL> w;
    cin>>s>>k;
    for(i=0;i<26;i++)
    {
        cin>>a; mx=max(mx,a);
        w.push_back(a);
    }
    LL n=s.size();
    for(i=0;i<n;i++)
    {
        f+=((i+1)*(w[s[i]-'a']));
    }
    //cout<<f<<" "<<mx<<"\n";
    a=(mx*n*(n+1))/2;
    LL b=(mx*(n+k)*(n+k+1))/2;
    f+=(b-a);
    cout<<f;
    return 0;
}
