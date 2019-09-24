#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int l,i,c1,c2,mnc;
    while(1)
    {
        mnc=90000000;
        c1=-1;
        c2=-1;
        cin>>l;
        if(!l) break;
        cin>>s;
        for(i=0;i<l;i++)
        {
            if(s[i]=='Z')
            {
                mnc=0;
                break;
            }
            if(s[i]=='R')
            {
                c1=0;
                if(c2!=-1 && c2<mnc) mnc=++c2;
            }
            if(s[i]=='D')
            {
                c2=0;
                if(c1!=-1 && c1<mnc) mnc=++c1;
            }
            if(s[i]=='.')
            {
                if(c1!=-1) c1++;
                if(c2!=-1) c2++;
            }
        }
        cout<<mnc<<"\n";
    }
    return 0;
}
