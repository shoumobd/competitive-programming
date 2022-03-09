#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,a,b,c,x=0,y=0,z=0;
    cin>>a>>b;
    c=a+b;
    i=1;
    while(a)
    {
        if(a%10)
        {
            x+=i*(a%10);
            i*=10;
        }
        a/=10;
        //cout<<x<<" "<<a<<" "<<i<<"\n";
    }
    i=1;
    while(b)
    {
        if(b%10)
        {
            y+=i*(b%10);
            i*=10;
        }
        b/=10;
    }
    i=1;
    while(c)
    {
        if(c%10)
        {
            z+=i*(c%10);
            i*=10;
        }
        c/=10;
    }
    //cout<<x<<" "<<y<<" "<<z<<"\n"<<x+y<<"\n";
    if(x+y==z) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
