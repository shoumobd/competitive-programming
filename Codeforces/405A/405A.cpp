#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    vector <int> v;
    while(n--)
    {
        cin>>i;
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
