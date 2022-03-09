#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    long long c=0,a,b;
    vector < pair<long long,long long> > v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(make_pair(0,a));
        c+=a;
    }
    for(i=0;i<n;i++)
    {
        cin>>b;
        v[i].first=b;
    }
    sort(v.begin(),v.end());
    if(v[n-1].first+v[n-2].first-c>=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    //cout<<v[n-1].second<<" "<<v[n-2].second;
    return 0;
}
