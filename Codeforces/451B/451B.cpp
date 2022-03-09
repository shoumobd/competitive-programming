#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,i1=-1,i2=-1,x;
    vector <int> v1,v2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v2.begin(),v2.end());
    for(i=0;i<n;i++)
    {
        if(v1[i]!=v2[i])
        {
            i1=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(v1[i]!=v2[i])
        {
            i2=i;
            break;
        }
    }
    if(i1>=0 && i2>=0) reverse(v1.begin()+i1,v1.begin()+i2+1);
    string s="yes";
    for(i=0;i<n;i++)
    {
        //printf("here, i1=%d, i2=%d, i=%d, v1i=%d, v2i=%d\n",i1,i2,i,v1[i],v2[i]);
        if(v1[i]!=v2[i])
        {
            s="no";
            break;
        }
    }
    cout<<s<<"\n";
    if(s=="yes")
    {
        if(i1==-1 && i2==-1)
        {
            cout<<"1 1\n";
        }
        else
        {
            cout<<i1+1<<" "<<i2+1<<"\n";
        }
    }
    return 0;
}
