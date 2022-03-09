#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,f,c,a;
    vector < pair<int,int> > v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    if(n==1)
    {
        cout<<"Exemplary pages.";
    }
    else if(n==2)
    {
        c=v[1].first-v[0].first;
        if(!(c%2))
        {
            if(!c)
                cout<<"Exemplary pages.";
            else
                printf("%d ml. from cup #%d to cup #%d.",c/2,v[0].second,v[1].second);
        }
        else
        {
            cout<<"Unrecoverable configuration.";
        }
    }
    else
    {
        c=v[n-1].first-v[0].first;
        if(!(c%2))
        {
            if(!c)
            {
                f=1;
                for(i=1; i<n-1; i++)
                {
                    if(v[i].first!=v[0].first+c/2)
                        f=0;
                }
                if(f)
                    cout<<"Exemplary pages.";
                else
                    cout<<"Unrecoverable configuration.";
            }
            else
            {
                f=1;
                for(i=1; i<n-1; i++)
                {
                    if(v[i].first!=v[0].first+c/2)
                        f=0;
                }
                if(f)
                    printf("%d ml. from cup #%d to cup #%d.",c/2,v[0].second,v[n-1].second);
                else
                    cout<<"Unrecoverable configuration.";
            }
        }
        else
        {
            cout<<"Unrecoverable configuration.";
        }
    }
    return 0;
}
