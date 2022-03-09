#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,c=0,a,b,x,y;
    for(i=0;i<s.size();i++)
    {
        x=s[i];
        if(i) y=s[i-1];
        else y='a';
        if(x>y) swap(x,y);
        a=abs(x-y);
        b=abs(x-'a'+'z'-y+1);
        c+=(min(a,b));
        //printf("Here, i=%d, x=%d, y=%d, a=%d, b=%d, c=%d,\n",i,x,y,a,b,c);
    }
    cout<<c;
    return 0;
}
