#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x,a,c=0;
    int n,i;
    vector <long long> v;
    cin>>n>>x;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0; i<n; i++)
    {
        c+=(x*v[i]);
        if(x>1)
            x--;
    }
    cout<<c;
    return 0;
}
