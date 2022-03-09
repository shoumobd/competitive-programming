#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,x;
    vector <int> v,v1;
    cin>>n>>a;
    while(--n)
    {
        x=a;
        cin>>a;
        v.push_back(a-x);
        if(v.size()>1) v1.push_back(v[v.size()-1]+v[v.size()-2]);
        //cout<<"Here, "<<a-x<<"\n";
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    cout<<max(v[v.size()-1],v1[0]);
    return 0;
}
