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
    set <char> t;
    cin>>n>>s;
    if(n>26)
        cout<<"-1\n";
    else
    {
        for(i=0; i<n; i++)
        {
            t.insert(s[i]);
        }
        cout<<n-t.size()<<"\n";
    }
    return 0;
}
