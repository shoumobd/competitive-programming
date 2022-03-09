#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,j,c=0;
    string s;
    vector <string> v;
    cin>>n>>m;
    vector <char> mx(m+2);
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
        for(j=0;j<m;j++)
        {
            mx[j]=max(mx[j],s[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(v[i][j]==mx[j])
            {
                c++;
                break;
            }
        }
    }
    cout<<c;
    return 0;
}
