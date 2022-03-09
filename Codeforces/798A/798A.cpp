#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i,c=0;
    cin>>s;
    for(i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-1-i]) c++;
    }
    if(c==1 || (s.size()%2 && !c)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
