#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,s[5]={1,5,10,25,50};
    long long c;
    vector <long long> v(30001);
    while(1)
    {
        fill(v.begin(),v.end(),0);
        cin>>n;
        if(!cin) break;
        c=0;
        v[0]=1;
        for(i=0;i<5;i++)
        {
            for(j=s[i];j<=n;j++)
            {
                v[j]+=v[j-s[i]];
            }
        }
        c=v[n];
        if(c==1) cout<<"There is only 1 way to produce "<<n<<" cents change.\n";
        else cout<<"There are "<<c<<" ways to produce "<<n<<" cents change.\n";
    }
    return 0;
}
