#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n,i,a=0,b=0;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='1') a++;
        else b++;
    }
    cout<<abs(a-b);
    return 0;
}
