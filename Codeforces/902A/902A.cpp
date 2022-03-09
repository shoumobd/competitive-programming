#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

bool sortit(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first<b.first || (a.first==b.first && a.second<b.second));
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,b,i,mx=-1;
    bool f=1;
    vector < pair<int,int> > v;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),sortit);
    if(v[0].first>0)
        f=0;
    else
    {
        for(i=0; i<n; i++)
        {
            //cout<<v[i].first<<" "<<v[i].second<<"\n";
            mx=max(mx,v[i].second);
            if(mx>=m)
            {
                f=1;
                break;
            }
            else if(i<n-1 && v[i+1].first>mx)
                f=0;
            else if(i==n-1 && m>mx)
                f=0;
            if(!f)
                break;
        }
    }
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
