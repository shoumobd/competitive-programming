#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a;
    vector < pair<int,string> > v;
    v.push_back(make_pair(0,"back"));
    v.push_back(make_pair(0,"chest"));
    v.push_back(make_pair(0,"biceps"));
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        v[i%3].first+=a;
    }
    sort(v.begin(),v.end());
    cout<<v[2].second;
    return 0;
}
