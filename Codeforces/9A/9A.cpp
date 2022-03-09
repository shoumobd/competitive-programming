#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    y=max(y,w);
    w=7-y;
    cout<<w/__gcd(w,6)<<"/"<<6/__gcd(w,6);
    return 0;
}
