#include <bits/stdc++.h>

using namespace std;

int a[10];

int main()
{
    int n,i,j,mx=-1,mxi=0;
    string s;
    vector <string> v(10);
    v[0]="vaporeon";
    v[1]="jolteon";
    v[2]="flareon";
    v[3]="espeon";
    v[4]="umbreon";
    v[5]="leafeon";
    v[6]="glaceon";
    v[7]="sylveon";
    cin>>n>>s;
    for(i=0;i<s.size();i++)
    {
        for(j=0;j<8;j++)
        {
            if(v[j].size()!=s.size()) continue;
            if(v[j][i]==s[i]) a[j]++;
        }
    }
    for(i=0;i<8;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            mxi=i;
        }
    }
    if(mx==0)
    {
        for(i=0;i<8;i++)
        {
            if(s.size()==v[i].size())
            {
                mxi=i;
                break;
            }
        }
    }
    cout<<v[mxi];
    return 0;
}
