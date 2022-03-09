#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a;
    multiset <int> m;
    multiset <int> :: iterator it;
    multiset <int> :: reverse_iterator rit;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        m.insert(a);
    }
    rit=m.rbegin();
    a=*rit;
    m.erase(--m.end());
    if(a!=1)
        m.insert(1);
    else
        m.insert(2);
    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
