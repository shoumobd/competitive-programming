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
    int n,a;
    string s="";
    cin>>n;
    while(--n)
    {
        cin>>a;
        while(a--) s+="PRL";
        s+="R";
    }
    cin>>a;
    while(a--) s+="PLR";
    cout<<s;
    return 0;
}
