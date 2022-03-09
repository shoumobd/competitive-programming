#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,f,i;
    string s="NO";
    map <int, int> mp;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>f;
        mp[i]=f;
        if(mp[mp[i]]>0 && mp[mp[mp[i]]]==i)
        {
            s="YES";
            //cout<<"Here, mpmpi="<<mp[mp[i]]<<", mpi="<<mp[i]<<", i="<<i<<"\n";
        }
    }
    cout<<s;
    return 0;
}
