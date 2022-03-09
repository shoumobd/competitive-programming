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
    int k,i,c=0;
    string q,s;
    set <char> st;
    map <char, int> mp;
    cin>>k>>q;
    for(i=0;i<q.size();i++)
    {
        st.insert(q[i]);
    }
    //cout<<st.size()<<"\n";
    if(k>st.size())
        cout<<"NO";
    else
    {
        cout<<"YES\n";
        for(i=0;i<q.size();i++)
        {
            if(!mp[q[i]])
            {
                mp[q[i]]=1;
                c++;
                if(c<=k && c>1) cout<<"\n";
            }
            cout<<q[i];
        }
        //cout<<q.substr(k-1,q.size());
    }
    return 0;
}
