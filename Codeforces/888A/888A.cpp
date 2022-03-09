#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a,c=0;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=1;i<n-1;i++)
    {
        if((v[i]<v[i-1] && v[i]<v[i+1]) || (v[i]>v[i-1] && v[i]>v[i+1]))
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
