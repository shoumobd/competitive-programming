#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n;
    long long a,c;
    vector <long long> v;
    cin>>t;
    while(t--)
    {
        c=0;
        v.clear();
        cin>>n;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end(),greater<long long>());
        for(i=2;i<v.size();i+=3)
        {
            c+=v[i];
        }
        cout<<c<<"\n";
    }
    return 0;
}
