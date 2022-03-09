#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int i,p=0,l=0;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='-') l++; else p++;
    }
    if(!p || !(l%p)) cout<<"YES\n"; else cout<<"NO\n";
    return 0;
}
