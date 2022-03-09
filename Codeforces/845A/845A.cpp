#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,i,f=1;
    vector <int> v;
    cin>>n;
    for(i=0;i<2*n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    /*for(i=0;i<n;i++)
    {
        if(v[i]==v[i+n])
        {
            f=0;
            break;
        }
    }*/
    if(v[n-1]<v[n]) cout<<"YES";
    else cout<<"NO";
    return 0;
}
