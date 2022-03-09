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
    int n,d,a,c=0,i,j;
    vector <int> v;
    cin>>n>>d;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
                continue;
            if(abs(v[i]-v[j])<=d)
                c++;
        }
    }
    cout<<c;
    return 0;
}
