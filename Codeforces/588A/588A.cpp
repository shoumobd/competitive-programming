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
    int n,i,a,c=0,p;
    vector < pair <int, int> > v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>p;
        v.push_back(make_pair(a,p));
    }
    for(i=0; i<n; i++)
    {
        a=v[i].second;
        while(v[i].second>=a)
        {
            if(i>=n)
                break;
            c+=(v[i].first*a);
            i++;
        }
        i--;
    }
    cout<<c;
    return 0;
}
