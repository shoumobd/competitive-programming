#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,i,n;
    vector <int> v(3005);
    cin>>n;
    while(n--)
    {
        cin>>x;
        v[x]++;
    }
    for(i=1; i<=3002; i++)
    {
        if(!v[i])
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
