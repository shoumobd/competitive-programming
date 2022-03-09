#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t,p=""; int i,c=0,c1=0;
    cin>>s>>t;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!=t[i]) c++;
    }
    if(c%2) cout<<"impossible";
    else
    {
        for(i=0;i<s.size();i++)
        {
            if(c1>=c/2 && s[i]!=t[i]) p+=s[i];
            else p+=t[i];
            if(s[i]!=t[i]) c1++;
        }
        cout<<p;
    }
    return 0;
}
