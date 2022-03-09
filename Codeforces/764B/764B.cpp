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
    int n,i,a;
    vector <int> v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<n/2; i++)
    {
        if(!(i%2))
            swap(v[i],v[n-i-1]);
    }
    cout<<v[0];
    for(i=1; i<n; i++)
    {
        cout<<" "<<v[i];
    }
    return 0;
}
