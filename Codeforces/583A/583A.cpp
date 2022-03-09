#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,h,v;
    vector <int> a;
    map <int, int> m1,m2;
    cin>>n;
    for(i=1;i<=n*n;i++)
    {
        cin>>h>>v;
        if(!m1[h] && !m2[v])
        {
            a.push_back(i);
            m1[h]=1; m2[v]=1;
        }
    }
    //cout<<a.size()<<"\n";
    for(i=0;i<a.size();i++)
    {
        if(i) cout<<" ";
        cout<<a[i];
    }
    return 0;
}
