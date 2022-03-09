#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,n,k,i,c=0,i1=0;
    vector < pair < int, int > > v;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end());
    while(c<=k)
    {
        c+=v[i1].first;
        if(i1<n && c<=k) i1++;
        else break;
    }
    cout<<i1<<"\n";
    for(i=0;i<i1;i++) cout<<v[i].second<<" ";
    return 0;
}
