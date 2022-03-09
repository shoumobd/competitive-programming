#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,m,i,j;
    string s;
    vector <string> v;
    cin>>n>>m;
    int sr=n,er=0,sc=m,ec=0;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=0;i<m;i++)
    {
        j=0;
        while(j<n && v[j][i]=='.')
        {
            j++;
        }
        sr=min(sr,j);
        j=n-1;
        while(j>=0 && v[j][i]=='.')
        {
            j--;
            //cout<<i<<" "<<j<<"\n";
        }
        er=max(er,j);
    }
    for(i=0;i<n;i++)
    {
        j=0;
        while(j<m && v[i][j]=='.')
        {
            j++;
        }
        sc=min(sc,j);
        j=m-1;
        while(j>=0 && v[i][j]=='.')
        {
            j--;
        }
        ec=max(ec,j);
    }
    for(i=sr;i<=er;i++)
    {
        for(j=sc;j<=ec;j++)
        {
            cout<<v[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
