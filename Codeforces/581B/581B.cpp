#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL n,i,x;
    vector <LL> h;
    cin>>n;
    vector <LL> v(n+2);
    vector <LL> a(n+2);
    for(i=0;i<n;i++)
    {
        cin>>x;
        h.push_back(x);
    }
    v[n]=0;
    for(i=n-1;i>=0;i--)
    {
        v[i]=max(v[i+1],h[i]);
    }
    a[n-1]=0;
    for(i=n-2;i>=0;i--)
    {
        if(h[i]>v[i+1]) a[i]=0;
        else a[i]=v[i+1]+1-h[i];
    }
    for(i=0;i<n;i++)
    {
        if(i) cout<<" ";
        cout<<a[i];
    }
    cout<<"\n";
    return 0;
}
