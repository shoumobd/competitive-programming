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
    int n,i,a,c,s;
    priority_queue <int> pq;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a; if(!i) s=a;
        else pq.push(a);
    }
    for(c=0;;c++)
    {
        if(s>pq.top()) break;
        a=pq.top(); a--; s++;
        pq.pop(); pq.push(a);
    }
    cout<<c;
    return 0;
}
