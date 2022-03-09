#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    string s,t,x;
    cin>>s>>t;
    x=s;
    for(i=x.size()-1;i>=0;i--)
    {
        if(x[i]<'z')
        {
            x[i]++;
            break;
        }
        else
        {
            x[i]='a';
        }
    }
    if(x>=t || x<=s) cout<<"No such string";
    else cout<<x;
    return 0;
}
