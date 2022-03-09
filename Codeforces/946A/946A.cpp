#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b=0,c=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>0) b+=a;
        else c+=a;
    }
    cout<<b-c<<"\n";
    return 0;
}
