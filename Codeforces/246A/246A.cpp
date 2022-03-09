#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    if(n<=2) cout<<"-1";
    else
    {
        for(i=1;i<n;i++) cout<<i+1<<" ";
        cout<<"1";
    }
    return 0;
}
