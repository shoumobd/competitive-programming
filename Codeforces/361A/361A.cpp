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
    int n,k,i,j;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j) cout<<" ";
            if(i==j) cout<<k;
            else cout<<0;
        }
        cout<<"\n";
    }
    return 0;
}
