#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,f=0,i,x;
    vector <int> v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
        if(x)
            f++;
    }
    if(!f)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n"<<f<<"\n";
        for(i=0; i<n; i++)
        {
            cout<<i+1<<" ";
            if(!i && !v[i])
            {
                while(!v[i])
                {
                    i++;
                }
            }
            if(i+1<n && !v[i+1])
                i++;
            while(i+1<n && !v[i+1])
            {
                i++;
            }
            cout<<i+1<<"\n";
        }
    }
    return 0;
}
