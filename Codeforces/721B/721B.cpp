#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,j,f=1,mn=0,mx=0;
    string s;
    vector <string> v;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    cin>>s;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(v[i].size()>v[j].size()) swap(v[i],v[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(v[i].size()<s.size())
        {
            mn++;
            if(i && !(i%k)) mn+=5;;
        }
        if(v[i].size()<=s.size())
        {
            mx++;
            if(i && !(i%k)) mx+=5;
            if(f && v[i].size()==s.size())
            {
                f=0;
                mn++;
                if(i && !(i%k)) mn+=5;
            }
        }
        //printf("Here, i=%d, visz=%d, ssz=%d, mn=%d, mx=%d\n",i,v[i].size(),s.size(),mn,mx);
    }
    cout<<mn<<" "<<mx;
    return 0;
}
