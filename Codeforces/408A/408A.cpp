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
    int n,i,j,a,c,mn=INF;
    vector <int> k;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        k.push_back(a);
    }
    for(i=0; i<n; i++)
    {
        c=k[i]*15;
        for(j=0; j<k[i]; j++)
        {
            cin>>a;
            c+=(5*a);
        }
        mn=min(mn,c);
    }
    cout<<mn;
    return 0;
}
