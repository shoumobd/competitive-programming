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
    int n,m,a,mx=0,mn=0;
    priority_queue <int> q1,q2;
    cin>>n>>m;
    while(m--)
    {
        cin>>a;
        q1.push(a);
        q2.push(-1*a);
    }
    while(n--)
    {
        mx+=(q1.top());
        if(q1.top()>1) q1.push(q1.top()-1);
        q1.pop();
        mn+=(-1*q2.top());
        a=q2.top(); a++;
        //cout<<a<<"\n";
        q2.pop();
        if(a<0) q2.push(a);
    }
    cout<<mx<<" "<<mn;
    return 0;
}
