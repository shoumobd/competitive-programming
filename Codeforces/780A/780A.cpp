#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,c=0,mx=-1;
    cin>>n;
    n*=2;
    vector <int> v(n+2);
    fill(v.begin(),v.end(),0);
    while(n--)
    {
        cin>>a;
        if(v[a])
        {
            v[a]=0;
            c--;
        }
        else
        {
            v[a]++;
            c++;
        }
        mx=max(c,mx);
    }
    cout<<mx<<"\n";
    return 0;
}
