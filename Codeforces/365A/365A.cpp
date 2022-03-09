#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,a,f,c=0,i;
    map <int,int> mp;
    cin>>n>>k;
    while(n--)
    {
        f=1;
        mp.clear();
        cin>>a;
        while(a)
        {
            mp[a%10]++;
            a/=10;
        }
        for(i=0; i<=k; i++)
        {
            if(mp[i]<1)
                f=0;
        }
        if(f)
            c++;
    }
    cout<<c;
    return 0;
}
