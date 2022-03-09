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
    int n,a,b,f=2,i;
    vector <int> v1,v2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a!=b)
            f=1;
        v1.push_back(a);
        v2.push_back(b);
    }
    if(f==2)
    {
        sort(v2.begin(),v2.end(),std::greater<int>());
        for(i=0; i<n; i++)
        {
            if(v1[i]!=v2[i])
                f=0;
        }
    }
    if(f==0)
        cout<<"unrated";
    if(f==1)
        cout<<"rated";
    if(f==2)
        cout<<"maybe";
    return 0;
}
