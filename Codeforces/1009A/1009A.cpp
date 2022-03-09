#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,a,c=0;
    vector <int> v;
    queue <int> q;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<m; i++)
    {
        cin>>a;
        q.push(a);
    }
    for(i=0; i<n; i++)
    {
        if(q.empty())
            break;
        if(q.front()>=v[i])
        {
            c++;
            q.pop();
        }
    }
    cout<<c;
    return 0;
}
