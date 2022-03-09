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
    int n,a,m,md,l,h,i;
    vector <int> v;
    cin>>n;
    v.push_back(0);
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back(a+v[i-1]);
        //cout<<v[i]<<"\n";
    }
    cin>>m;
    while(m--)
    {
        cin>>a;
        l=1;
        h=n;
        while(l<=h)
        {
            md=(l+h)/2;
            if(v[md]>=a && v[md-1]<a)
            {
                break;
            }
            else if(v[md]<a)
            {
                l=md+1;
            }
            else
            {
                h=md-1;
            }
        }
        cout<<md<<"\n";
    }
    return 0;
}
