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
    int n,a,b,c,f=0,i,x,y;
    vector <int> v;
    cin>>n>>a>>b;
    for(i=0; i<n; i++)
    {
        cin>>c;
        v.push_back(c);
    }
    for(i=0; i<n/2; i++)
    {
        x=v[i];
        y=v[n-i-1];
        if(x==y)
        {
            if(x+y==4)
                f+=(2*min(a,b));
        }
        else
        {
            if(x+y==1)
            {
                f=-1;
                break;
            }
            else if(x+y-2)
                f+=b;
            else
                f+=a;
        }
    }
    if(f!=-1 && n%2 && v[n/2]==2)
        f+=(min(a,b));
    cout<<f;
    return 0;
}
