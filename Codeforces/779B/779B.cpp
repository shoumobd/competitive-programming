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
    string s;
    int k,c=0,c1=0,c2=0,i;
    cin>>s>>k;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='0') c++;
    }
    if(c<k) cout<<s.size()-1;
    else
    {
        for(i=0;i<s.size();i++)
        {
            if(s[i]!='0') c1++;
            else c2++;
            if(c2==c-k+1) break;
        }
        cout<<s.size()-c-c1;
    }
    return 0;
}
