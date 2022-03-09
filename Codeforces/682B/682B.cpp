#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    v[0]=1;
    for(i=1;i<v.size();i++)
    {
        v[i]=min(v[i],v[i-1]+1);
    }
    cout<<v[v.size()-1]+1;
    return 0;
}
