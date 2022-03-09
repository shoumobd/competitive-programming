#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s1,s2;
    queue <string> m,w,c,r;
    cin>>n;
    while(n--)
    {
        cin>>s1>>s2;
        if(s2=="rat")
            r.push(s1);
        if(s2=="woman" || s2=="child")
            w.push(s1);
        if(s2=="man")
            m.push(s1);
        if(s2=="captain")
            c.push(s1);
    }
    while(!r.empty())
    {
        cout<<r.front()<<"\n";
        r.pop();
    }
    while(!w.empty())
    {
        cout<<w.front()<<"\n";
        w.pop();
    }
    while(!m.empty())
    {
        cout<<m.front()<<"\n";
        m.pop();
    }
    while(!c.empty())
    {
        cout<<c.front()<<"\n";
        c.pop();
    }
    return 0;
}
