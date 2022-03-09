#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c,v,v1,a,l,i=1,s=0;
    cin>>c>>v>>v1>>a>>l;
    s=v;
    while(s<c)
    {
        s+=min(v1-l,(v+(i*a)-l));
        i++;
        //cout<<i<<" "<<s<<"\n";
    }
    cout<<i;
    return 0;
}
