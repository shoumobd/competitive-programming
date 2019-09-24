#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,ti=0;
    long long n,x;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);
        x=(n-1)*n;
        if(!(x%4))
            cout<<"Case "<<++ti<<": "<<x/4<<"\n";
        else if(!(x%2))
            cout<<"Case "<<++ti<<": "<<x/2<<"/"<<2<<"\n";
        else
            cout<<"Case "<<++ti<<": "<<x<<"/"<<4<<"\n";
    }
    return 0;
}
