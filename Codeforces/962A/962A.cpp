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
    int n,i;
    ll s=0,c=0,a;
    vector <ll> v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        s+=a;
        v.push_back(a);
    }
    for(i=0; i<n; i++)
    {
        c+=v[i];
        if(c>=(1+(s-1)/2))
            break;
    }
    cout<<i+1;
    return 0;
}
