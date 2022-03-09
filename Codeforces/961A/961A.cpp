#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a;
    cin>>n>>m;
    vector <int> v(n);
    fill(v.begin(),v.end(),0);
    while(m--)
    {
        cin>>a;
        v[a-1]++;
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<"\n";
    return 0;
}
