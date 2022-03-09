#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,f=0,i;
    vector < pair < int,int > > v;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for(i=1; i<v.size(); i++)
    {
        if(v[i].first>v[i-1].first && v[i].second<v[i-1].second)
        {
            f=1;
            break;
        }
    }
    if(f) cout<<"Happy Alex";
    else cout<<"Poor Alex";
    return 0;
}
