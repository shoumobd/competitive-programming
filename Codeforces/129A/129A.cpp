#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c=0,e=0,o=0,n,a; cin>>n;
    while(n--){ cin>>a; c+=a; if(a%2) o++; else e++; }
    if(c%2) cout<<o; else cout<<e;
    return 0;
}
