#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,c,i;
    cin>>n>>m;
    m%=((n*(n+1))/2);
    //cout<<m<<"\n";
    for(i=0;i<=n;i++)
    {
        if(i*(i+1)/2<=m && (i+1)*(i+2)/2>m)
        {
            c=m-i*(i+1)/2;
            //cout<<i<<"\n"<<i*(i+1)/2<<"\n";
            break;
        }
    }
    cout<<c;
    return 0;
}
