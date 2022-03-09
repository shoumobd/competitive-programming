#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,a,f=0;
    cin>>n;
    vector <int> v(n+2);
    fill(v.begin(),v.end(),1);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a;
            if(a==3)
            {
                v[i]=0;
                v[j]=0;
            }
            else if(a==2)
            {
                v[j]=0;
            }
            else if(a==1)
            {
                v[i]=0;
            }
        }
    }
    cout<<accumulate(v.begin(),v.begin()+n,0)<<"\n";
    for(i=0; i<n; i++)
    {
        if(v[i])
        {
            if(f)
                cout<<" ";
            else
                f=1;
            cout<<i+1;
        }
    }
    return 0;
}
