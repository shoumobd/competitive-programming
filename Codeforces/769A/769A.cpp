#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,i;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<v[n/2];
    return 0;
}
