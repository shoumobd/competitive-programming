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
    int i,f=1;
    string s;
    cin>>s;
    for(i=1; i<s.size(); i++)
    {
        if(s[i]!=s[0])
            f=0;
    }
    if(f)
        cout<<0;
    else
    {
        for(i=0; i<s.size()/2; i++)
        {
            if(s[i]!=s[s.size()-i-1])
                f=1;
        }
        if(f)
            cout<<s.size();
        else
            cout<<s.size()-1;
    }
    return 0;
}
