#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,f=1;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='.')
        {
            if(s[i-1]=='9')
                f=0;
            else
            {
                if(s[i+1]>='5')
                    s[i-1]++;
            }
            break;
        }
    }
    if(f)
        s.erase(i,s.size()-i);
    else
        s="GOTO Vasilisa.";
    cout<<s;
    return 0;
}
