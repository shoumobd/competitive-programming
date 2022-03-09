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
    int n,m,st=-1,i,j;
    string s,t;
    cin>>n>>m>>s>>t;
    for(i=0; i<n; i++)
    {
        if(s[i]=='*')
        {
            st=i;
            break;
        }
    }
    if(st==-1)
    {
        if(s==t)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        int f=1;
        for(i=0; i<st; i++)
        {
            if(s[i]!=t[i])
            {
                f=0;
            }
            t[i]='-';
        }
        for(i=n-1,j=m-1; i>st; i--,j--)
        {
            if(s[i]!=t[j])
            {
                f=0;
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
