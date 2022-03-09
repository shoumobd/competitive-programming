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
    int n,i=0;
    string s,s1="";
    cin>>n>>s;
    while(i<n)
    {
        if(i<n-2 && s[i]=='o' && s[i+1]=='g' && s[i+2]=='o')
        {
            s1+="***";
            i+=3;
            while(i<n && s[i]=='g' && s[i+1]=='o')
            {
                i+=2;
            }
        }
        else
        {
            s1+=s[i];
            i++;
        }
    }
    cout<<s1;
    return 0;
}
