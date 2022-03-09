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
    LL n,c,s1=0,s2=0,i,x,a;
    vector <LL> p,t;
    cin>>n>>c;
    for(i=0;i<n;i++)
    {
        cin>>a;
        p.push_back(a);
    }
    for(i=0;i<n;i++)
    {
        cin>>a;
        t.push_back(a);
    }
    x=0;
    for(i=0;i<n;i++)
    {
        x+=t[i];
        s1+=(max((LL)0,p[i]-c*x));
    }
    x=0;
    for(i=n-1;i>=0;i--)
    {
        x+=t[i];
        s2+=(max((LL)0,p[i]-c*x));
    }
    //cout<<s1<<" "<<s2<<"\n";
    if(s1>s2) cout<<"Limak";
    else if(s1<s2) cout<<"Radewoosh";
    else cout<<"Tie";
    return 0;
}
