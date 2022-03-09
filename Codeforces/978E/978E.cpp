#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,w,a,x=0,l=0,h=0,c=0;
    cin>>n>>w;
    while(n--)
    {
        cin>>a;
        x+=a;
        l=min(x,l);
        h=max(x,h);
    }
    cout<<max(w+1-max(abs(l),abs(h))-min(abs(l),abs(h)),(long long)0);
    return 0;
}
