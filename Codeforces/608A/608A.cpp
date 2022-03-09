#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortinrev(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first > b.first);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s,f,t,i;
    vector < pair <int, int> > v;
    cin>>n>>s;
    while(n--)
    {
        cin>>f>>t;
        v.push_back(make_pair(f,t));
    }
    sort(v.begin(),v.end(),sortinrev);
    int c=max(s-v[0].first,v[0].second);
    //cout<<0<<" "<<c<<"\n";
    //cout<<"Now "<<v[0].first<<" "<<v[0].second<<"\n";
    for(i=1; i<v.size(); i++)
    {
        c=max(c+v[i-1].first-v[i].first,v[i].second);
        //cout<<i<<" "<<c<<"\n";
        //cout<<"Now "<<v[i].first<<" "<<v[i].second<<"\n";
    }
    c+=(v[v.size()-1].first);
    cout<<c;
    return 0;
}
