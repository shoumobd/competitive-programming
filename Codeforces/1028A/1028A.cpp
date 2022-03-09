#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,j,rs=-1,cs=-1,re=-1,ce=-1,rc=-1,cc=-1;
    string s;
    vector <string> v;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
        if(rs==-1)
        {
            for(j=0; j<m; j++)
            {
                if(s[j]=='B')
                {
                    rs=i;
                    cs=j;
                    break;
                }
            }
        }
    }
    //cout<<rs<<" "<<cs<<"\n";
    i=cs;
    while(i<m && v[rs][i]=='B')
        i++;
    ce=i-1;
    i=rs;
    while(i<n && v[i][cs]=='B')
        i++;
    re=i-1;
    //cout<<re<<" "<<ce<<"\n";
    rc=rs+(re-rs)/2+1;
    cc=cs+(ce-cs)/2+1;
    cout<<rc<<" "<<cc;
    return 0;
}
