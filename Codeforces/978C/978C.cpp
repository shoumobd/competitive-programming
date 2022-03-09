#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,l,h,mi;
    long long a;
    vector <long long> v;
    v.push_back(0);
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(v[i]+a);
    }
    for(i=0;i<m;i++)
    {
        cin>>a;
        l=1;
        h=n;
        while(l<=h)
        {
            mi=(l+h)/2;
            if(a<=v[mi] && a>v[mi-1])
            {
                break;
            }
            else if(a>v[mi])
            {
                l=mi+1;
            }
            else
            {
                h=mi-1;
            }
        }
        cout<<mi<<" "<<a-v[mi-1]<<"\n";
    }
    return 0;
}
