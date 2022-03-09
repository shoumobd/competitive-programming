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
    int n,i,a,a1,an;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(!i) a1=a; if(i==n-1) an=a;
    }
    if(n%2 && a1%2 && an%2) cout<<"Yes\n";
    else cout<<"No\n";
    //cout<<a1<<" "<<an<<"\n";
    return 0;
}
