#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,r,a;
    cin>>l>>r>>a;
    if(min(l,r)+a<max(l,r)) cout<<2*(min(l,r)+a);
    else cout<<2*(max(l,r)+(a+min(l,r)-max(l,r))/2);
    return 0;
}
