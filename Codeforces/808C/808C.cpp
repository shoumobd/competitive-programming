#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int a,i,c=0,n,w,x;
    vector < pair<int,int> > v;
    cin>>n>>w;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i));
        c+=(1+(a-1)/2);
    }
    if(c>w)
    {
        cout<<-1;
    }
    else
    {
        sort(v.rbegin(),v.rend());
        w-=c;
        for(i=0; i<n; i++)
        {
            //printf("1 Here, i=%d, w=%d, vf=%d\n",i,w,v[i].first);
            x=min(w,v[i].first/2);
            v[i].first-=v[i].first/2;
            //printf("2 Here, i=%d, w=%d, vf=%d, min=%d\n",i,w,v[i].first,x);
            v[i].first+=x;
            w-=x;
            //printf("3 Here, i=%d, w=%d, vf=%d\n",i,w,v[i].first);
        }
        sort(v.begin(),v.end(),sortbysec);
        for(i=0; i<n-1; i++)
            cout<<v[i].first<<" ";
        cout<<v[n-1].first<<"\n";
    }
    return 0;
}
