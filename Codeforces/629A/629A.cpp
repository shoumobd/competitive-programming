#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,c=0,c1;
    string s;
    vector <string> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
        c1=0;
        for(j=0;j<n;j++)
        {
            if(s[j]=='C') c1++;
        }
        c+=(c1*(c1-1)/2);
    }
    for(i=0;i<n;i++)
    {
        c1=0;
        for(j=0;j<n;j++)
        {
            if(v[j][i]=='C') c1++;
        }
        c+=(c1*(c1-1)/2);
    }
    cout<<c;
    return 0;
}
