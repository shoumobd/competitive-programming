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
    int n,a,i,mx,mx1,mx2,mxi,mni;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a==1) mni=i;
        if(a==n) mxi=i;
    }
    mx1=max(abs(n-mxi),abs(mxi-1));
    mx2=max(abs(n-mni),abs(mni-1));
    mx=max(mx1,mx2);
    cout<<mx<<"\n";
    return 0;
}
