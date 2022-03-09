#include <bits/stdc++.h>

using namespace std;

int ss(string s)
{
    int c=0,f=-1;
    while(1)
    {
        f=s.find("VK",f+1);
        if(f==string::npos)
            break;
        c++;
        //cout<<"Here, f="<<f<<"\n";
    }
    return c;
}

char swaps(char c)
{
    if(c=='V') return 'K';
    return 'V';
}

int main()
{
    int i,c=0,f=-1;
    string s;
    cin>>s;
    c=ss(s);
    for(i=0;i<s.size();i++)
    {
        s[i]=swaps(s[i]);
        c=max(c,ss(s));
        s[i]=swaps(s[i]);
    }
    cout<<c;
    return 0;
}
