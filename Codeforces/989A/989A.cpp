#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,f="No";
    int i;
    cin>>s;
    for(i=2; i<s.size(); i++)
    {
        if(s[i-2]+s[i-1]+s[i]=='A'+'B'+'C' && s[i-2]!=s[i])
            f="Yes";
    }
    cout<<f;
    return 0;
}
