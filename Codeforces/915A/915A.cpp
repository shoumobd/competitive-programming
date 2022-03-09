#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,x=INT_MAX;
    cin>>n>>k;
    while(n--)
    {
        cin>>i;
        if(!(k%i))
            x=min(x,k/i);
    }
    cout<<x;
    return 0;
}
