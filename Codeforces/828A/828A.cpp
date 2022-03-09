#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL n,a,b,c=0,s=0,x;
    cin>>n>>a>>b;
    while(n--)
    {
        cin>>x;
        if(x==2)
        {
            if(b>0) b--;
            else s+=2;
        }
        else
        {
            if(a>0) a--;
            else if(b>0){b--; c++;}
            else if(c>0) c--;
            else s++;
        }
    }
    cout<<s;
    return 0;
}
