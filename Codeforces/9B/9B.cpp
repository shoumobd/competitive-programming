#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c=2;
    vector <double> v;
    double vb,vs,a,t,x,y,tl=90000001;
    cin>>n>>vb>>vs;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>x>>y;
    for(i=1;i<n;i++)
    {
        t=v[i]/vb+sqrt(y*y+(x-v[i])*(x-v[i]))/vs;
        //printf("Here i=%d, t=%lf, tl=%lf, c=%d\n",i,t,tl,c);
        if(t<=tl)
        {
            tl=t;
            c=i+1;
        }
    }
    cout<<c;
    return 0;
}
