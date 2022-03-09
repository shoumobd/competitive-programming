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
    LL n,i,a,c=0;
    vector <LL> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=1;i<n;i++)
    {
        while(v[i]<=v[i-1])
        {
            c++;
            v[i]++;
        }
    }
    cout<<c<<"\n";
    return 0;
}
