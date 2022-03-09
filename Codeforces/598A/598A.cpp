#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long n,l,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        l=(long long)log2(n);
        n=(n*(n+1))/2;
        x=2*((long long)pow(2,l+1)-1);
        n-=x;
        cout<<n<<"\n";
    }
    return 0;
}
