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
    int n,k,i,c=1;
    string s;
    cin>>n>>k>>s;
    sort(s.begin(),s.end());
    int a=s[0]-'a'+1; char ch=s[0];
    for(i=1;i<n;i++)
    {
        if(c==k) break;
        if(s[i]-ch<2) continue;
        c++; a+=(s[i]-'a'+1); ch=s[i];
        //cout<<ch;
    }
    if(c<k) a=-1;
    cout<<a;
    return 0;
}
