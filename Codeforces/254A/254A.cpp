#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,a,i;
    vector < pair<int,int> > v,v1;
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    for(i=0;i<2*n;i+=2)
    {
        if(v[i].first==v[i+1].first)
        {
            v1.push_back(make_pair(v[i].second,v[i+1].second));
        }
    }
    if(v1.size()==n)
    {
        for(i=0;i<n;i++)
        {
            cout<<v1[i].first<<" "<<v1[i].second<<"\n";
        }
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
