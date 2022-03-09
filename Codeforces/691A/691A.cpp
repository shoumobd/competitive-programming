#include <bits/stdc++.h>

using namespace std;

#define ll long long

int cc(int n)
{
    int x,c=0;
    while(n--)
    {
        cin>>x;
        if(x) c++;
    }
    return c;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c=0;
    cin>>n;
    c=cc(n);
    if(c==max(1,n-1)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
