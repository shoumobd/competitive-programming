#include <bits/stdc++.h>

using namespace std;

int fact(int x)
{
    if(!x) return 1;
    return x*fact(x-1);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<fact(min(a,b));
    return 0;
}
