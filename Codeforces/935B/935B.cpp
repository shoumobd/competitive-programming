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
    int n,i,x=0,y=0,c=0;
    bool f;
    string s;
    cin>>n>>s;
    if(s[0]=='R')
        f=1;
    else
        f=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='R')
            x++;
        else
            y++;
        if((x<y && f) || (x>y && !f))
        {
            c++;
            f=!f;
        }
        //cout<<s[i]<<" "<<x<<" "<<y<<" "<<f<<" "<<c<<"\n";
    }
    cout<<c;
    return 0;
}
