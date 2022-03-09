#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,c=0;
    int n,i;
    vector <long long> v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        c+=abs(i+1-v[i]);
    }
    cout<<c;
    return 0;
}
