#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    vector <int> v;
    cin>>n;
    v.push_back(1);
    while(--n)
    {
        v.push_back(1);
        while(v[v.size()-1]==v[v.size()-2])
        {
            v[v.size()-2]++;
            v.pop_back();
        }
    }
    cout<<v[0];
    for(i=1; i<v.size(); i++)
        cout<<" "<<v[i];
    return 0;
}
