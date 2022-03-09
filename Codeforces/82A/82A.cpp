#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll x=0,n,i=1,a;
    cin>>n;
    while(x<=n)
    {
        x+=(5*i);
        i*=2;
        if(x>n)
        {
            i/=2;
            x-=(5*i);
            break;
        }
    }
    n-=x;
    for(a=1;a<=5;a++)
    {
        if(!n)
        {
            a=5;
            break;
        }
        n-=i;
        if(n<=0)
        {
            break;
        }
    }
    //cout<<n<<" "<<a;
    if(a==1) cout<<"Sheldon";
    if(a==2) cout<<"Leonard";
    if(a==3) cout<<"Penny";
    if(a==4) cout<<"Rajesh";
    if(a==5) cout<<"Howard";
    return 0;
}
