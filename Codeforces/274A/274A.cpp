#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n,i,c=0,f[100001];
    ll k,a,l,h,m;
    vector <ll> v;
    memset(f,0,sizeof(f));
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        scanf("%I64d",&a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0; i<n; i++)
    {
        l=i+1;
        h=n-1;
        if(!f[i])
        {
            while(l<=h)
            {
                m=(l+h)/2;
                if(v[m]==k*v[i])
                {
                    c++;
                    f[m]=1;
                    break;
                }
                else if(v[m]<k*v[i])
                {
                    l=m+1;
                }
                else if(v[m]>k*v[i])
                {
                    h=m-1;
                }
            }
        }
    }
    printf("%d",n-c);
    return 0;
}
