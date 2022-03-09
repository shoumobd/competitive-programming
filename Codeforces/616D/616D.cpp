#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,c=0,x=0,i,a,l,r;
    vector <int> v;
    map <int, int> mp;
    deque <int> d;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<n;i++)
    {
        if(!mp[v[i]])
        {
            c++;
        }
        mp[v[i]]++;
        d.push_back(v[i]);
        while(c>k)
        {
            mp[d.front()]--;
            if(!mp[d.front()])
            {
                c--;
            }
            d.pop_front();
        }
        if(d.size()>x)
        {
            x=d.size();
            l=i+2-x;
            r=i+1;
            //printf("Here, x=%d, i=%d\n",x,i);
        }
    }
    cout<<l<<" "<<r<<"\n";
    return 0;
}
