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
    int k;
    double r1,r2,r3,a,a1,a2,a3,t1,t2,t3;
    cin>>k;
    cout<<fixed<<setprecision(6);
    while(k--)
    {
        cin>>r1>>r2>>r3;
        t1=acos(1-((2*r2*r3)/((r1+r2)*(r1+r3))));
        t2=acos(1-((2*r1*r3)/((r1+r2)*(r2+r3))));
        t3=acos(1-((2*r2*r1)/((r1+r3)*(r2+r3))));
        a1=0.5*t1*r1*r1;
        a2=0.5*t2*r2*r2;
        a3=0.5*t3*r3*r3;
        a=sqrt(r1*r2*r3*(r1+r2+r3));
        a-=(a1+a2+a3);
        cout<<a<<"\n";
    }
    return 0;
}
