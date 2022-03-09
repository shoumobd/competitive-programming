#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    while(n>0)
    {
        s+='a'; n--; if(n==0) break;
        s+='a'; n--; if(n==0) break;
        s+='b'; n--; if(n==0) break;
        s+='b'; n--; if(n==0) break;
    }
    cout<<s;
    return 0;
}
