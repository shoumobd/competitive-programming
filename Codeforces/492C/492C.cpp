#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long avg,r,a,b,c=0,e=0;
    int n,i;
    vector < pair<long long, long long> > v;
    cin>>n>>r>>avg;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        c+=a;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    if(n*avg>c)
        for(i=0; i<n; i++)
        {
            e+=(min(n*avg-c,r-v[i].second)*v[i].first);
            c+=min(n*avg-c,r-v[i].second);
            if(c>=n*avg)
                break;
        }
    cout<<e;
    return 0;
}
