#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k;
    string s,s1;
    queue <char> q;
    cin>>n>>s;
    s1=s;
    if(n%2)
    {
        s1[n/2]=s[0];
        i=n/2-1; j=n/2+1; k=1;
        while(i>=0 || j<n)
        {
            if(i>=0) s1[i]=s[k];
            k++;
            if(j<n) s1[j]=s[k];
            k++;
            i--; j++;
        }
    }
    else
    {
        s1[n/2-1]=s[0];
        s1[n/2]=s[1];
        i=n/2-2; j=n/2+1; k=2;
        while(i>=0 || j<n)
        {
            if(i>=0) s1[i]=s[k];
            k++;
            if(j<n) s1[j]=s[k];
            k++;
            i--; j++;
        }
    }
    cout<<s1;
    return 0;
}
