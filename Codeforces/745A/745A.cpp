#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    string s;
    map <string, int> m;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        m[s]++;
        s+=s[0];
        s.erase(s.begin());
        //cout<<s<<"\n";
    }
    cout<<m.size();
    return 0;
}
