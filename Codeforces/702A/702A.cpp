#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

vector <LL> v;

LL doit()
{
    LL mx=1,l=1;
    for(int i=1; i<v.size(); i++)
    {
        if(v[i]>v[i-1])
            l++;
        else
        {
            if(mx<l)
                mx=l;
            l=1;
        }
    }
    if(mx<l)
        mx=l;
    return mx;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    LL a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    cout<<doit();
    return 0;
}
