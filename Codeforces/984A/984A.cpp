#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    vector <int> v;
    cin>>n;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if((v.size())%2) cout<<v[(v.size())/2];
    else cout<<v[(v.size())/2-1];
    return 0;
}
