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
    int t,n,i;
    map <char, int> mp;

    string s;
    cin>>t;
    while(t--)
    {
        mp.clear();
        cin>>s;
        n=s.size();
        sort(s.begin(),s.end());
        if(s[n-1]-s[0]+1!=n) cout<<"No\n";
        else
        {
            for(i=0;i<n;i++)
            {
                mp[s[i]]++;
            }
            int f=1;
            for(char c=s[0];c<=s[n-1];c++)
            {
                if(mp[c]!=1) f=0;
            }
            if(f) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    return 0;
}
