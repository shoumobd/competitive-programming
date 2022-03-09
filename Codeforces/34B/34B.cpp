#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,i,c=0;
    vector <int> v;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    i=0;
    while(m--)
    {
        if(v[i]>=0)
        {
            break;
        }
        c+=v[i];
        i++;
    }
    cout<<-c;
    return 0;
}
