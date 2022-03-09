#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,f1,f2,f;
    cin>>n;
    string s(n,'o');
    f1=1; s[0]='O';
    f2=1;
    f=f1+f2;
    while(f<=n)
    {
        s[f-1]='O';
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    cout<<s;
    return 0;
}
