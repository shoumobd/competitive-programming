#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0,x;
    string s;
    stringstream ss;
    map <string, int> mp= { {"ABSINTH",1}, {"BEER",1}, {"BRANDY",1}, {"CHAMPAGNE",1}, {"GIN",1}, {"RUM",1}, {"SAKE",1}, {"TEQUILA",1}, {"VODKA",1}, {"WHISKEY",1},{"WINE",1} };
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(mp[s])
            c++;
        else if(s[0]>='0' && s[0]<='9')
        {
            stringstream().swap(ss);
            ss<<s;
            ss>>x;
            if(x<18)
            {
                c++;
                //cout<<"here"<<x;
            }
        }
    }
    cout<<c;
    return 0;
}
