#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c;
    cin>>n;
    c=n/2+1;
    for(i=0;i<n;i++)
    {
        c--;
        string s(abs(c),'*');
        string s1(n-2*abs(c),'D');
        cout<<s<<s1<<s<<"\n";
    }
    return 0;
}
