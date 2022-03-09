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
    int n,a,o=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a%2) o++;
    }
    if(o) cout<<"First"; else cout<<"Second";
    return 0;
}
