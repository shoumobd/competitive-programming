#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,a;
    vector <int> v;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    a=0;
    for(i=0;i<n;i++)
    {
        a+=v[i];
        if(a>=m) break;
    }
    cout<<i+1;
    return 0;
}
