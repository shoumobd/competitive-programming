#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,f=0,x=0,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(!f && a-x>15)
        {
            f=x+15;
        }
        x=a;
    }
    if(!f) f=min(90,x+15);
    cout<<f<<"\n";
    return 0;
}
