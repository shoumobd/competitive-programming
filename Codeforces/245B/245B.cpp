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
    string s; int i; bool f=1; cin>>s;
    if(s[0]=='f') { cout<<"ftp://"<<s[3]; i=4; }
    else { cout<<"http://"<<s[4]; i=5; }
    while(i<s.size())
    {
        if(s[i]=='r' && s[i+1]=='u' && f)
        {
            cout<<".ru"; if(i+2<s.size()) cout<<"/";
            i+=2;
            f=0;
        }
        else { cout<<s[i]; i++; }
    }
    return 0;
}
