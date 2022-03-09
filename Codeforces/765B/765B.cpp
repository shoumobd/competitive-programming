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
    string s,f="YES"; int i; char c='a';
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]<c) continue;
        if(s[i]==c) c++;
        else f="NO";
    }
    cout<<f;
    return 0;
}
