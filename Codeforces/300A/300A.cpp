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
    int n,i,a,c1=0,c2=0,c3=0,f1=0,f2=0;
    vector <int> v,v1,v2,v3;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
        if(a<0)
            c1++;
        else if(a>0)
            c2++;
        else
            c3++;
    }
    //sort(v.begin(),v.end());
    for(i=0; i<v.size(); i++)
    {
        if(!v[i])
        {
            v3.push_back(v[i]);
        }
        else if(v[i]>0)
        {
            v2.push_back(v[i]);
        }
        else
        {
            if(!f1)
            {
                v1.push_back(v[i]);
                f1=1;
            }
            else if(!c2 && f2<2)
            {
                v2.push_back(v[i]); f2++;
            }
            else
                v3.push_back(v[i]);
        }
    }
    cout<<v1.size();
    for(i=0;i<v1.size();i++)
    {
        cout<<" ";
        cout<<v1[i];
    }
    cout<<"\n";
    cout<<v2.size();
    for(i=0;i<v2.size();i++)
    {
        cout<<" ";
        cout<<v2[i];
    }
    cout<<"\n";
    cout<<v3.size();
    for(i=0;i<v3.size();i++)
    {
        cout<<" ";
        cout<<v3[i];
    }
    cout<<"\n";
    return 0;
}
