#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,i,c=0;
    map <char, int> mp;
    string s;
    cin>>s>>k;
    if(s.size()<k)
        cout<<"impossible";
    else
    {
        for(i=0; i<s.size(); i++)
        {
            if(mp[s[i]]==0)
                c++;
            mp[s[i]]++;
        }
        cout<<max(k-c,0);
    }
    return 0;
}
