#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a,f=1;
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
        if(v[i]%v[0])
        {
            f=0;
            break;
        }
    }
    if(f) cout<<v[0];
    else cout<<-1;
    return 0;
}
