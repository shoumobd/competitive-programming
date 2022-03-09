#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c=0,a=0;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            a++;
            if(a>=3)
                c++;
        }
        else
        {
            a=0;
        }
    }
    cout<<c;
    return 0;
}
