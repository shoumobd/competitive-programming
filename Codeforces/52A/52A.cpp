#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c1=0,c2=0,c3=0,x;
    cin>>n;
    int n1=n;
    while(n1--)
    {
        cin>>x;
        if(x==1) c1++;
        if(x==2) c2++;
        if(x==3) c3++;
    }
    cout<<n-max(c1,max(c2,c3))<<"\n";
    return 0;
}
