#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i=1;
    string f,l,s;
    cin>>f>>l;
    s+=f[0];
    while(i<f.size() && f[i]<l[0])
    {
        s+=f[i];
        i++;
    }
    s+=l[0];
    cout<<s;
    return 0;
}
