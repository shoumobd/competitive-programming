#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,c=0,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        c+=a;
    }
    a=0;
    for(i=1; i<=5; i++)
    {
        if((c+i)%(n+1)!=1)
            a++;
    }
    cout<<a<<"\n";
    return 0;
}
