#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,d,e,f,r;
    cin>>a>>b>>c>>d>>e>>f;
    if((!c && d) || (!a && b && d) || b*d*f>a*c*e) cout<<"Ron";
    else cout<<"Hermione";
    return 0;
}
