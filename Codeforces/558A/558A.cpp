#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int n,x,a,c=0,m=0,p=0,i;
    vector < pair<int,int> > v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x>>a;
        v.push_back(make_pair(a,x));
        //c+=a;
        if(x<0)
            m++;
        else
            p++;
    }
    sort(v.begin(),v.end(),sortbysec);
    if(m<p)
    {
        for(i=0;i<=2*m;i++)
        {
            c+=v[i].first;
            //cout<<"Here, "<<c<<endl;
        }
    }
    else
    {
        for(i=m-p-1;i<n;i++)
        {
            if(i>=0) c+=v[i].first;
            //cout<<"Lol Here, "<<c<<endl;
        }
    }
    cout<<c;
    return 0;
}
