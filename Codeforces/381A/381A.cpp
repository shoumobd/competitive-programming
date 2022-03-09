#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,a;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int s=0,d=0,j1=0,j2=n-1;
    for(i=0;i<n;i++)
    {
        if(i%2) d+=max(v[j1],v[j2]);
        else s+=max(v[j1],v[j2]);
        if(v[j1]>v[j2]) j1++;
        else j2--;
    }
    cout<<s<<" "<<d;
    return 0;
}
