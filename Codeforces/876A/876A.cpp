#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    vector <int> v(3);
    cin>>n>>v[0]>>v[1]>>v[2];
    c+=min(v[0],v[1]);
    sort(v.begin(),v.end());
    c+=(n-2)*v[0];
    if(n==1) c=0;
    cout<<c;
    return 0;
}
