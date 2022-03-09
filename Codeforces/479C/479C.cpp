#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a,b,mn=0;
    vector < pair <int,int> > v;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        if(v[i].second>=mn) mn=v[i].second;
        else mn=v[i].first;
        //cout<<v[i].first<<" "<< v[i].second<<endl;
    }
    cout<<mn;
    return 0;
}
