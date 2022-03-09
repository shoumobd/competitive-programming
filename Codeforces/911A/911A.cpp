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
    int n,a,i,mn=INT_MAX;
    vector <int> v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(mn==a)
            v.push_back(i);
        else if(mn>a)
        {
            mn=a;
            v.clear();
            v.push_back(i);
        }
    }
    mn=INT_MAX;
    for(i=1; i<v.size(); i++)
    {
        mn=min(mn,v[i]-v[i-1]);
    }
    cout<<mn;
    return 0;
}
