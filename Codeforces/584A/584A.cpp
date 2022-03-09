#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,i;
    vector <int> v;
    cin>>n>>t;
    if(t<=9)
    {
        while(n--)
            v.push_back(t);
    }
    else
    {
        while(--n)
            v.push_back(1);
        v.push_back(0);
    }
    if(!v[0]) cout<<"-1";
    else
    {
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
    }
    return 0;
}
