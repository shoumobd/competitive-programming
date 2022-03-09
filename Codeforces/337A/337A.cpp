#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x,i;
    vector <int> v,v2;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<=m-n;i++)
    {
        v2.push_back(v[i+n-1]-v[i]);
    }
    sort(v2.begin(),v2.end());
    cout<<v2[0];
    return 0;
}
