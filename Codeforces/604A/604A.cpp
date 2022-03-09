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
    int i;
    double a,hs,hu;
    vector <double> x,w,m;
    x.push_back(500.0);
    x.push_back(1000.0);
    x.push_back(1500.0);
    x.push_back(2000.0);
    x.push_back(2500.0);
    for(i=0;i<5;i++)
    {
        cin>>a;
        m.push_back(a);
    }
    for(i=0;i<5;i++)
    {
        cin>>a;
        w.push_back(a);
    }
    cin>>hs>>hu;
    double s=100.0*hs-50.0*hu;
    for(i=0;i<5;i++)
    {
        s+=max((0.3*x[i]),((1-m[i]/250.0)*x[i]-50*w[i]));
    }
    cout<<fixed<<setprecision(0)<<s<<"\n";
    //cout<<(int)s<<"\n";
    return 0;
}
