#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,c=0,a;
    deque <int> dq;
    cin>>n>>k;
    while(n--)
    {
        cin>>a;
        dq.push_back(a);
    }
    while(!dq.empty())
    {
        if(k<dq.front()) break;
        dq.pop_front();
        c++;
    }
    while(!dq.empty())
    {
        if(k<dq.back()) break;
        dq.pop_back();
        c++;
    }
    cout<<c<<"\n";
    return 0;
}
