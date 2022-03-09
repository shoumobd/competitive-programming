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
    int n,i,a,c=0;
    vector <int> v;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            v.push_back(c);
            c=1;
        }
        else
            c++;
    }
    v.push_back(c);
    cout<<v.size()-1<<"\n"<<v[1];
    for(i=2; i<v.size(); i++)
    {
        cout<<" "<<v[i];
    }
    return 0;
}
