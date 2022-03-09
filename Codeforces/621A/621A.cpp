
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    ll a;
    vector <ll> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    a=accumulate(v.begin(),v.end(),(ll)0);
    if(a%2)
    {
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(v[i]%2)
            {
                a-=v[i];
                break;
            }
        }
    }
    cout<<a<<"\n";
    return 0;
}
