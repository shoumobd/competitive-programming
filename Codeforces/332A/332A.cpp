#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c=0;
    string s;
    cin>>n>>s;
    for(i=n;i<s.size();i+=n)
    {
        if(max(s[i-1],(max(s[i-2],s[i-3])))==min(s[i-1],(min(s[i-2],s[i-3]))))
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
