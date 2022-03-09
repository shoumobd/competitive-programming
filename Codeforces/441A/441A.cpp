#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,v,i,j,k,s;
    bool f;
    queue <int> q;
    cin>>n>>v;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        f=0;
        for(j=0;j<k;j++)
        {
            cin>>s;
            if(s<v) f=1;
        }
        if(f) q.push(i);
    }
    cout<<q.size()<<"\n";
    if(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
    while(!q.empty())
    {
        cout<<" "<<q.front();
        q.pop();
    }
    return 0;
}
