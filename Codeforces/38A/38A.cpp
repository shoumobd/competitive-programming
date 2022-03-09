#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,a,b,i;
    vector <int> v;
    cin>>n;
    v.push_back(0);
    for(i=1;i<n;i++)
    {
        cin>>d;
        v.push_back(v[i-1]+d);
    }
    cin>>a>>b;
    cout<<v[b-1]-v[a-1]<<"\n";
    return 0;
}
