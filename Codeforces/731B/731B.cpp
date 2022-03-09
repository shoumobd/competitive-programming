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
    int n,a,f=1,i;
    vector <int> v;
    cin>>n;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i+1<v.size();i++)
    {
        if(v[i]%2)
        {
            v[i+1]--;
            if(v[i+1]<0)
            {
                f=0;
                break;
            }
        }
    }
    if(v[v.size()-1]%2) f=0;
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
