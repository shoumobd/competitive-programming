#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool p(int x)
{
    int c=0,i;
    for(i=1;i<=x;i++) if(!(x%i)) c++;
    if(c==2) return 1;
    return 0;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i;
    string f="YES";
    cin>>n>>m;
    for(i=n+1;i<m;i++)
    {
        if(p(i)) f="NO";
    }
    if(!p(m)) f="NO";
    cout<<f;
    return 0;
}
