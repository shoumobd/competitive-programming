#include <bits/stdc++.h>

using namespace std;

long long dig(long long n)
{
    long long c=0;
    while(n)
    {
        c++;
        n/=10;
    }
    return c;
}

int main()
{
    long long n,d,i,j=1,c=0;
    cin>>n;
    d=dig(n);
    for(i=0;i<d-1;i++)
    {
        //cout<<i<<" "<<c<<" "<<(i+1)*9*pow(10,i)<<"\n";
        c+=(i+1)*9*j;//pow(10,i);
        j*=10;
    }
    c+=d*(n-j+1);
    cout<<c;
    return 0;
}
