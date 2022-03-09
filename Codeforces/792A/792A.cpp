#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,i,c=1,mn=INT_MAX;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=1;i<n;i++)
    {
        if(v[i]-v[i-1]<mn)
        {
            mn=v[i]-v[i-1];
            c=1;
        }
        else if(v[i]-v[i-1]==mn)
        {
            c++;
        }
    }
    cout<<mn<<" "<<c;
    return 0;
}
