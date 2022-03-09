#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,s,x;
    cin>>t>>s>>x;
    x-=t;
    if(x<0 || x==1) cout<<"NO";
    else if(!(x%s) || x%s==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
