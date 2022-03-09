#include <bits/stdc++.h>

using namespace std;

vector <int> v;

int mx=1,mxi=0;

int lis(int n)
{
    if(n==1) return 1;
    int x,mxc=1;
    for(int i=1; i<n; i++)
    {
        x=lis(i);
        if (v[i-1]==v[n-1]-1 && x+1>mxc)
            mxc=x+1;
    }
    if(mx<mxc)
    {
       mx=mxc;
       mxi=n;
    }
    return mxc;
}

int main()
{
    int n,k,i,x,c=1,ci=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        v.push_back(x);
    }
    lis(n);
    if(!mxi) mxi++;
    int s=v[mxi-1]-mx+1;
    cout<<mx<<"\n";//<<" "<<mxi<<" "<<v[mxi-1]<<"\n";
    for(i=0;i<n;i++)
    {
        if(v[i]==s)
        {
            s++;
            cout<<i+1<<" ";
        }
    }
    return 0;
}
