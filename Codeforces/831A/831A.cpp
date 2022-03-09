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
    int n,i,a,f=1,c=1;
    vector <int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        if(!i) continue;
        if(v[i]==v[i-1])
        {
            if(c==1)
            {
                c=2;
            }
            else if(c==3)
            {
                f=0;
            }
        }
        else if(v[i]>v[i-1])
        {
            if(c!=1)
            {
                f=0;
            }
        }
        else
        {
            c=3;
        }
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
