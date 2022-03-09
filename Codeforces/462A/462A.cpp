#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,c,f=1;
    string s;
    vector <string> v;
    cin>>n;
    while(n--)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=0;i<v.size();i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            c=0;
            if(j && v[i][j-1]=='o') c++;
            if(j<v[i].size()-1 && v[i][j+1]=='o') c++;
            if(i && v[i-1][j]=='o') c++;
            if(i<v.size()-1 && v[i+1][j]=='o') c++;
            if(c%2)
            {
                f=0;
                break;
            }
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
