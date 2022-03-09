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
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n==(i*(i+1))/2)
        {
            cout<<"YES"; return 0;
        }
    }
    cout<<"NO";
    return 0;
}
