#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    vector <int> v;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='2')
        {
            v.push_back(2);
        }
        if(s[i]=='3')
        {
            v.push_back(3);
        }
        if(s[i]=='4')
        {
            v.push_back(3);
            v.push_back(2);
            v.push_back(2);
        }
        if(s[i]=='5')
        {
            v.push_back(5);
        }
        if(s[i]=='6')
        {
            v.push_back(5);
            v.push_back(3);
        }
        if(s[i]=='7')
        {
            v.push_back(7);
        }
        if(s[i]=='8')
        {
            v.push_back(7);
            v.push_back(2);
            v.push_back(2);
            v.push_back(2);
        }
        if(s[i]=='9')
        {
            v.push_back(7);
            v.push_back(3);
            v.push_back(3);
            v.push_back(2);
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    return 0;
}
