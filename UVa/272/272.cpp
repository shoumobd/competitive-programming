#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j=0;
    const char c='"';
    string s;
    while(1)
    {
        getline(cin,s);
        if(!cin)
            break;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==c)
            {
                if(!(j%2))
                {
                    cout<<"``";
                }
                else
                {
                    cout<<"''";
                }
                j++;
            }
            else
            {
                cout<<s[i];
                //printf("%c",s[i]);
            }
        }
        cout<<"\n";
    }
    return 0;
}
