#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=8,i,j,x=0,y=0,c=0;
    string s;
    vector <string> v;
    while(n--)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=0;i<8;i++)
    {
        c=0;
        for(j=0;j<8;j++)
        {
            if(v[i][j]=='W')
            {
                c++;
            }
        }
        if(!c) x++;
        else y=(8-c);
    }
    cout<<x+y;
    return 0;
}
