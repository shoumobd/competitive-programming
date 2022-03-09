#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,c=1;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1) c=-a;
    }
    cout<<c;
    return 0;
}
