#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1!=s2) cout<<max(s1.size(),s2.size());
    else cout<<"-1";
    return 0;
}
