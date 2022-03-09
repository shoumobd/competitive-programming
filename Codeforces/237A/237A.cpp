#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a=-1,c=1,h,m,h1=-1,m1=-1;
    cin>>n;
    while(n--)
    {
        cin>>h>>m;
        if(h==h1 && m==m1) c++;
        else c=1;
        a=max(c,a);
        h1=h; m1=m;
    }
    cout<<a<<"\n";
    return 0;
}
