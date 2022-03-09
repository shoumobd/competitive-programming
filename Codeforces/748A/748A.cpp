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
    int n,m,k,k1,x,y;
    char c;
    cin>>n>>m>>k;
    x=1+(k-1)/(2*m);
    k1=k%(2*m); if(!k1) k1+=(2*m);
    y=1+(k1-1)/2;
    if(k1%2)
        c='L';
    else
        c='R';
    cout<<x<<" "<<y<<" "<<c<<"\n";
    return 0;
}
