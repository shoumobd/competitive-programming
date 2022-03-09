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
    int i=0,f=1;
    string s;
    cin>>s;
    while(i<s.size())
    {
        if(s[i]=='1')
        {
            if(i+1<s.size() && s[i+1]=='4')
            {
                if(i+2<s.size() && s[i+2]=='4')
                {
                    i+=3;
                }
                else
                {
                    i+=2;
                }
            }
            else
            {
                i+=1;
            }
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
