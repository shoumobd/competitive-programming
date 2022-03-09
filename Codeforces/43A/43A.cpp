#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=1,b=0;
    string s,s1,s2;
    cin>>n>>s1;
    while(--n)
    {
        cin>>s;
        if(s==s1) a++;
        else
        {
            s2=s;
            b++;
        }
    }
    if(a>b) cout<<s1;
    else cout<<s2;
    return 0;
}
