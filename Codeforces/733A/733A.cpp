#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int i,j=0;
    vector <int> v;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            v.push_back(i+1-j);
            j=i+1;
        }
    }
    v.push_back(s.size()+1-j);
    sort(v.begin(),v.end(),greater <int>());
    cout<<v[0]<<"\n";
    return 0;
}
