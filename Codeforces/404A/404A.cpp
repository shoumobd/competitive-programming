#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j;
    string s,f="YES\n";
    vector <string> v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((i==j || i+j==n-1) && v[i][j]!=v[0][0])
                f="NO\n";
            else if(!(i==j || i+j==n-1) && v[i][j]!=v[0][1])
                f="NO\n";
        }
    }
    if(v[0][0]==v[0][1]) f="NO\n";
    cout<<f;
    return 0;
}
