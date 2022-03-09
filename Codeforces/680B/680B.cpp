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
    int n,a,i,j,c=0,x;
    vector <int> v;
    cin>>n>>a;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    a--;
    i=a; j=a;
    while(i>=0 || j<n)
    {
        if(i==j && v[i]) c++;
        else if(i<0 && v[j]) c++;
        else if(j>=n && v[i]) c++;
        else if(v[i] && v[j]) c+=2;
        i--; j++;
    }
    cout<<c;
    return 0;
}
