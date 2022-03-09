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
    int c=0,x[]={8,5,3};
    cin>>s;
    if(s[0]=='a' || s[0]=='h') c++;
    if(s[1]=='1' || s[1]=='8') c++;
    cout<<x[c]<<"\n";
    return 0;
}
