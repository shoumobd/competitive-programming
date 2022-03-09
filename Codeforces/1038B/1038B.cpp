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
    int n,i,c1=0,c2=0;
    vector <int> v1,v2;
    cin>>n;
    if(n<2) cout<<"No\n";
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i%2)
            {
                c1+=i;
                v1.push_back(i);
            }
            else
            {
                c2+=i;
                v2.push_back(i);
            }
        }
        //cout<<"Here, c1="<<c1<<", c2="<<c2<<", gcd="<<__gcd(c1,c2)<<"\n";
        if(__gcd(c1,c2)<2)
            cout<<"No\n";
        else
        {
            cout<<"Yes\n";
            cout<<v1.size();
            for(i=0;i<v1.size();i++)
            {
                cout<<" "<<v1[i];
            }
            cout<<"\n";
            cout<<v2.size();
            for(i=0;i<v2.size();i++)
            {
                cout<<" "<<v2[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}
