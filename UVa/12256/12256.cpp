#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ti=0,n,i;
    vector <ll> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    for(i=3;i<60;i++)
    {
        v.push_back(v[i-1]+v[i-2]+v[i-3]);
    }
    while(1)
    {
        cin>>n;
        if(!n) break;
        cout<<"Case "<<++ti<<": "<<v[n-1]<<"\n";
    }
    return 0;
}
