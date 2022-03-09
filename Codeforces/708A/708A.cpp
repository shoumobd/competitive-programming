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
    int i,c=0,f=1;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            c++;
            if(c!=i+1) f=0;
        }
        else if(s[i]!='a' && f)
        {
            s[i]--;
        }
    }
    if(c==s.size()) s[s.size()-1]='z';
    cout<<s;
    return 0;
}
