#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n,x,y;
    cin>>n>>x>>y;
    cout<<fixed<<setprecision(0)<<max(ceil((n*y)/100)-x,double(0))<<"\n";
    return 0;
}
