#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)
#define inf INT_MAX

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,a,c=0,s=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(m-c>a)
        {
            c+=a;
            s=0;
        }
        else
        {
            a-=(m-c);
            c=a%m;
            s=a/m+1;
        }
        if(i) cout<<" ";
        cout<<s;
    }
    return 0;
}
