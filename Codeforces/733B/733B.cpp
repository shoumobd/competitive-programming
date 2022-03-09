#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)
#define inf INT_MAX

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,l,r,lc=0,rc=0,b,f=0,tb,tl,tr,bmx;
    vector < pair <int, int> > v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>l>>r;
        v.push_back(make_pair(l,r));
        lc+=l;
        rc+=r;
    }
    b=abs(lc-rc);
    bmx=b;
    for(i=0; i<n; i++)
    {
        tl=lc;
        tr=rc;
        tl-=v[i].first;
        tr-=v[i].second;
        tr+=v[i].first;
        tl+=v[i].second;
        tb=abs(tl-tr);
        //cout<<"Here, i="<<i<<", tl="<<tl<<", tr="<<tr<<", tb="<<tb<<"\n";
        if(tb>bmx)
        {
            bmx=tb;
            f=i+1;
        }
    }
    cout<<f;
    return 0;
}
