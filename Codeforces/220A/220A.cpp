#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,i,c=0;
    stack <int> s;
    priority_queue <int> p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.push(a);
        p.push(a);
    }
    while(n--)
    {
        if(s.top()!=p.top()) c++;
        s.pop();
        p.pop();
    }
    if(c<=2) cout<<"YES";
    else cout<<"NO";
    return 0;
}
