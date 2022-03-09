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
    int n,m,k,i,a,i1=-1,i2=1000;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(i<m-1 && a && a<=k)
            i1=max(i1,i);
        if(i>m-1 && a && a<=k)
            i2=min(i2,i);
    }
    //cout<<i1<<" "<<i2<<"\n";
    if(i1>-1) cout<<min(10*(m-i1-1),10*(i2+1-m));
    else cout<<10*(i2+1-m);
    return 0;
}
