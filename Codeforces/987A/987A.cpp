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
    int n,i;
    string s;
    map <string, int> c;
    map <string, string> g;
    map <string, string> :: iterator it;
    g["purple"]="Power";
    g["green"]="Time";
    g["blue"]="Space";
    g["orange"]="Soul";
    g["red"]="Reality";
    g["yellow"]="Mind";
    c["purple"]=2;
    c["green"]=2;
    c["blue"]=2;
    c["orange"]=2;
    c["red"]=2;
    c["yellow"]=2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        c[s]++;
    }
    cout<<6-n<<"\n";
    for(it=g.begin(); it!=g.end(); it++)
    {
        if(c[it->first]==2)
            cout<<it->second<<"\n";
    }
    return 0;
}
