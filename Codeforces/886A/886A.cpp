#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=6,a;
    vector <int> v;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    do
    {
        if(v[0]+v[1]+v[2]==v[3]+v[4]+v[5])
        {
            n=1;
            break;
        }
    }
    while(next_permutation(v.begin(),v.end()));
    if(n==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
