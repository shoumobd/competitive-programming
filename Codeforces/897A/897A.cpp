#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,l,r,i;
    string s;
    char c1,c2;
    cin>>n>>m>>s;
    while(m--)
    {
        cin>>l>>r>>c1>>c2;
        for(i=l-1;i<r;i++)
        {
            if(s[i]==c1) s[i]=c2;
        }
    }
    cout<<s;
    return 0;
}
