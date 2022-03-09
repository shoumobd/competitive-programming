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
    int n,i,a,s,t,c1=0,c2=0;
    vector <int> v;
    cin>>n;
    v.push_back(0);
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>s>>t;
    i=s;
    while(i!=t)
    {
        c1+=v[i];
        i++;
        if(i==n+1) i=1;
    }
    i=t;
    while(i!=s)
    {
        c2+=v[i];
        i++;
        if(i==n+1) i=1;
    }
    //cout<<c1<<" "<<c2<<"\n";
    cout<<min(c1,c2);
    return 0;
}
