#include <bits/stdc++.h>

using namespace std;

int main()
{
    int na,nb,k,m,a,b,x,y,i;
    cin>>na>>nb>>k>>m;
    for(i=0;i<na;i++)
    {
        cin>>a;
        if(i==k-1) x=a;
    }
    for(i=0;i<nb;i++)
    {
        cin>>b;
        if(i==nb-m) y=b;
    }
    if(x<y) cout<<"YES";
    else cout<<"NO";
    return 0;
}
