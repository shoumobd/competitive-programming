#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,c=0,x;
    string s1,s2,s3,s4;
    vector <int> v(1001);
    cin>>n>>m;
    while(m--)
    {
        cin>>s1>>s2>>s3>>s4>>x;
        if(s3=="left")
        {
            for(i=x-1;i<n;i++)
            {
                v[i]=1;
            }
        }
        else
        {
            for(i=0;i<x;i++)
            {
                v[i]=1;
            }
        }
        //cout<<s3<<" "<<x<<'\n';
    }
    for(i=0;i<n;i++)
    {
        if(!v[i]) c++;
    }
    if(!c) c--;
    cout<<c<<'\n';
	return 0;
}
