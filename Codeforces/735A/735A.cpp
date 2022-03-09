#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,f=0,t,g,i;
    string s;
    cin>>n>>k>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='T') t=i;
        if(s[i]=='G') g=i;
    }
    if(t<g) swap(t,g);
    for(i=g;i<n;i+=k)
    {
        if(s[i]=='#') break;
        else if(i>g && (s[i]=='T' || s[i]=='G'))
        {
            f=1;
            break;
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
