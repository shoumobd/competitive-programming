#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,m,a;
    char c;
    cin>>h>>c>>m>>a;
    while(a--)
    {
        m=(m+1)%60;
        if(!m)
            h=(h+1)%24;
    }
    if(h<10)
        cout<<"0";
    cout<<h<<":";
    if(m<10)
        cout<<"0";
    cout<<m;
    return 0;
}
