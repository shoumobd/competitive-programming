#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,c=0,mx=0;
    string s;
    cin>>n>>d;
    while(d--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        if(s[0]=='0') c++;
        else c=0;
        mx=max(mx,c);
    }
    cout<<mx;
    return 0;
}
