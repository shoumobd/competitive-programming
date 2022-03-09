#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,s,x,y,f=1;
    vector < pair<int,int> > v;
    cin>>s>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(v[i].first>=s)
        {
            f=0;
            break;
        }
        s+=v[i].second;
    }
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
