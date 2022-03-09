#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

string rt(string s)
{
    sort(s.begin(),s.end());
    string s1=""; s1+=s[0];
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1]) s1+=s[i];
    }
    return s1;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c=0;
    string s,s1;
    map <string, int> mp;
    cin>>n;
    while(n--)
    {
        cin>>s;
        s1=rt(s);
        //cout<<s1<<"\n";
        if(!mp[s1])
        {
            mp[s1]++; c++;
        }
    }
    cout<<c;
    return 0;
}
