#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; int i; ll x,c=0;
    vector <ll> a;
    for(i=0;i<4;i++)
    {
        cin>>x; a.push_back(x);
    }
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        c+=a[s[i]-'1'];
    }
    cout<<c<<"\n";
    return 0;
}
