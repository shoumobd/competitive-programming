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
    int n,i,j,a,c=0;
    vector <int> v[105];
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a;
            v[i].push_back(a);
        }
    }
    for(i=0; i<n; i++)
    {
        c+=v[i][i];
        if(i!=n/2)
        {
            c+=v[i][n-i-1];
            c+=v[n/2][i];
            c+=v[i][n/2];
        }
    }
    cout<<c;
    return 0;
}
