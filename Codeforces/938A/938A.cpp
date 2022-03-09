#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PI 2*acos(0.0)

bool vo(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
        return 1;
    return 0;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    string s,s1;
    cin>>n>>s;
    s1+=s[0];
    for(i=1; i<s.size(); i++)
    {
        if(vo(s1[s1.size()-1]) && vo(s[i])) continue;
                s1+=s[i];
    }
cout<<s1;
return 0;
}
