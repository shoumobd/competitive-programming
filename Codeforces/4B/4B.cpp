#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d,s,i,a,b,c=0;
    vector < pair < int,int > > v;
    vector <int> v1;
    cin>>d>>s;
    for(i=0; i<d; i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        c+=a;
    }
    if(c>s) cout<<"NO";
    else
    {
        s-=c;
        for(i=0; i<d; i++)
        {
            if(!s)
            {
                v1.push_back(v[i].first);
            }
            else
            {
                v1.push_back(v[i].first+min(s,v[i].second-v[i].first));
            }
            s-=min(s,v[i].second-v[i].first);
            //printf("Here i=%d, s=%d, v1[i]=%d\n",i,s,v1[i]);
        }
        if(s) cout<<"NO";
        else
        {
            cout<<"YES\n";
            for(i=0; i<d; i++)
            {
                cout<<v1[i]<<" ";
            }
        }
    }
    return 0;
}
