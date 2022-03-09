#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,m,x;
    char c;
    cin>>h>>c>>m;
    x=10*(h%10)+h/10;
    if(m>=x || x>=60)
    {
        do
        {
            h++;
            h%=24;
            x=10*(h%10)+h/10;
            //cout<<"here "<<x<<"\n";
        }
        while(x>=60);
    }
    m=x;
    if(h<10)
        cout<<0;
    cout<<h<<":";
    if(m<10)
        cout<<0;
    cout<<m;
    return 0;
}
