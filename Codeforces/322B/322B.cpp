#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long r,g,b,x;
    vector <long long> v;
    cin>>r>>g>>b;
    x=r/3+g/3+b/3+min(r%3,min(g%3,b%3));
    v.push_back(r%3);
    v.push_back(g%3);
    v.push_back(b%3);
    sort(v.begin(),v.end());
    if(r && g && b && !v[0] && v[1]==2 && v[2]==2) x++;
    cout<<x;
    return 0;
}
