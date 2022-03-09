#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c=0,i;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0') c++;
    }
    if(c==n) cout<<s<<"\n";
    else
    {
        cout<<"1";
        while(c--) cout<<"0";
        cout<<"\n";
    }
    return 0;
}
