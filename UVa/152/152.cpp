#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j;
    double x,y,z,d,mnd;
    vector <int> c(11);
    vector <double> a;
    vector < vector <double> > v;
    while(1)
    {
        cin>>x>>y>>z;
        if(abs(x)<=0.000001 && abs(y)<=0.000001 && abs(z)<=0.000001)
        {
            break;
        }
        a.clear();
        a.push_back(x);
        a.push_back(y);
        a.push_back(z);
        v.push_back(a);
    }
    for(i=0;i<v.size();i++)
    {
        mnd=10000000000;
        for(j=0;j<v.size();j++)
        {
            if(i==j) continue;
            d=(v[i][0]-v[j][0])*(v[i][0]-v[j][0])+(v[i][1]-v[j][1])*(v[i][1]-v[j][1])+(v[i][2]-v[j][2])*(v[i][2]-v[j][2]);
            d=sqrt(d);
            if(d<mnd) mnd=d;
        }
        if((int)mnd<10) c[(int)mnd]++;
    }
    for(i=0;i<10;i++)
    {
        for(j=to_string(c[i]).size();j<4;j++)
        {
            cout<<" ";
        }
        cout<<c[i];
    }
    cout<<"\n";
    return 0;
}
