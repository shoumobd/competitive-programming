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
    int m,a,c=0;
    map<int, int> mp;
    map<int, int> :: iterator it,i1;
    stack <int> st;
    cin>>m;
    while(m--)
    {
        cin>>a; mp[a]++;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        i1=it; i1++;
        if(i1==mp.end()) c++;
        else
        {
            if(it->second>1) c+=2; else c++;
        }
    }
    cout<<c<<"\n";
    for(it=mp.begin();it!=mp.end();it++)
    {
        i1=it; i1++;
        if(i1!=mp.end() && it->second>1) cout<<it->first<<" ";
        st.push(it->first);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
