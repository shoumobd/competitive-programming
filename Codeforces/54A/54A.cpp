#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,c,i,x=0,a;
    vector <int> v(367);
    cin>>n>>k>>c;
    while(c--)
    {
        cin>>a;
        v[a]=1;
    }
    int j=0;
    for(i=1;i<=n;i++)
    {
        j++;
        if(v[i]) j=k;
        if(j==k)
        {
            j=0;
            v[i]=1;
            x++;
        }
    }
    cout<<x;
    return 0;
}
