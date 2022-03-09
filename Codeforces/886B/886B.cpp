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
    int n,i,c,x; cin>>n;
    vector <bool> v(n+1);
    vector <int> a;
    fill(v.begin(),v.end(),0);
    for(i=0;i<n;i++){cin>>x; a.push_back(x);}
    for(i=n-1;i>=0;i--)
    {
        if(!v[a[i]])
        {
            v[a[i]]=1; c=a[i];
        }
    }
    cout<<c;
    return 0;
}
